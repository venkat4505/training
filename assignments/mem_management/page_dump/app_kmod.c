#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

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

	ptr = (int *)malloc(sizeof(int));
		
	printf("welcome world\n");

	printf("PID -> %d\n",getpid());
	
	ioctl(fd, getpid(), 10);
	getchar();	
	
	close(fd);
	return 0;
}
