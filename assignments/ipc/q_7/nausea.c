/*
*	nausea without semaphores
*/

#include<stdio.h>
#include<stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include<string.h>
#include<fcntl.h>

int main()
{

	int status;
	int fd;/*file descriptor returned by shm_open*/
//	int a[10];
//	int i = 1;
	int num = 58; 
	int *ptr1 ;
	ptr1 = &num;
	int *ptr;/*pointer returned by mmap*/

/* 
	A new shared memory object  initially  has  zero  length,the size of 
	the object can be set using ftruncate(2). The newly allocated bytes of 
		a shared memory object are  automatically initialized to 0.
*/

	if(-1 == (fd = (shm_open("/hii",O_CREAT | O_TRUNC | O_RDWR,0664)))) {/*creating & open shared memory object*/
		perror("shm_open failed");	
		exit(EXIT_FAILURE);
	}
	
	if (-1 == (status= (ftruncate(fd,4096)))) {/*sets the size of shared memory object*/
		perror("fruncate failed");
		exit(EXIT_FAILURE);	
	}
	
	ptr = (int *) mmap(NULL,4096,PROT_EXEC | PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);/*map shared memory into VAS of calling process*/ 
		if(ptr == MAP_FAILED) {	
			perror("mmap failed");
			exit(EXIT_FAILURE);
		}

	memcpy(ptr,ptr1,sizeof(ptr1));
	
	printf("%d\n",num);	

	return 0;
}

		
