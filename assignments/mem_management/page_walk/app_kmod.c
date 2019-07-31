#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int a = 10;

int main()
{
	int fd;

	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0) {
    	perror("unable to open the device");
 
    }
  
 	else {
        printf("file opened successfully %d \n", fd);
    }

	int *ptr = NULL;

	unsigned long b;

	b = &a;

	ptr = (int *)malloc(sizeof(int));
		
	printf("welcome world\n");

	printf("PID -> %d\n",getpid());
	
	ioctl(fd, getpid(), b);
	getchar();	
	
	close(fd);
	return 0;
}
