/*shared memory panacea
	-> shm_overview
	-> shm_open - create/open shared memory object
	-> mmap/munmap - map/unmap files/devices into memory
	-> ftruncate - regular file referenced by fd to be truncated to a specific size 
	-> memcpy
	-> time()
*/

#include<stdio.h>
#include<stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include<string.h>
#include<fcntl.h>
#include <semaphore.h>

int main()
{
	int status;
	int fd;
	int a[10];
	int i = 1; 
	int *ptr;
	sem_t *ptr1;
/* 
	A new shared memory object  initially  has  zero  length,the size of 
	the object can be set using ftruncate(2).  The newly allocated bytes of a 
		shared memory object are  automatically initialized to 0.
*/
	ptr1 = sem_open("/hii",O_RDWR);/*create/open semaphore*/
		if (ptr1 == SEM_FAILED) {
			perror("semaphore creation failed");
			exit(EXIT_FAILURE);
		}
		
	
	if(-1 == (fd = (shm_open("/hii",O_RDWR,0664)))) {/*creating & open shared memory object*/
		perror("shm_open failed");	
		exit(EXIT_FAILURE);
	}
	
	ptr = (int *) mmap(NULL,4096,PROT_EXEC | PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);/*map shared memory into VAS of calling process*/ 
		if(ptr == MAP_FAILED) {	
			perror("mmap failed");
			exit(EXIT_FAILURE);
		}
	
	if (-1 == (status = (sem_wait(ptr1)))) { /*lock the semaphore*/          
		perror("sem_wait failed");      
		exit(EXIT_FAILURE);    
	}

	memcpy(a,ptr, sizeof(a));

	if (-1 == (status = (sem_post(ptr1)))) { /*unlock the semaphore*/  
		 perror("sem_post failed");            
		 exit(EXIT_FAILURE);      
	} 
		
	while(i < 11) {
    //	a[i-1] = (time(NULL) % i);
		printf("%d\t",a[i - 1]);
    	i++;
    }
	
	 if (-1 == (status = (sem_wait(ptr1)))) { /*lock the semaphore*/                                   
        perror("sem_wait failed");                                              
        exit(EXIT_FAILURE);                                                    
    }   
                    
	memset(ptr,0,sizeof(a));
	
	memcpy(a,ptr,sizeof(a));

	if (-1 == (status = (sem_post(ptr1)))) { 
		perror("sem_post failed");    
		exit(EXIT_FAILURE);    
	}        	
	
	printf("\n");
	i = 1;
	while(i < 11) {  
		printf("%d\t",a[i - 1]); 
		i++;         
	}
//	printf("%d\n",*ptr);
//	printf("%p\n",ptr);
	
	return 0;
}
