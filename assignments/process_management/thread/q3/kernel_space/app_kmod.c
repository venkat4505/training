#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include<pthread.h>
#include<syscall.h>

//******thread function********

void *thread_function(void *arg)
{
	printf("I MA IN THREAD1\n");
  
	ioctl((*(int *)arg), syscall(SYS_gettid), 10);
	
	return NULL;
}

//************main function**********************
int main( void )
{
	
	int fd;

	int status;

	pthread_t th_id;
	
	if(0 != (status = pthread_create(&th_id, NULL, thread_function,&fd))) {

    	printf("creating thread failed : %d\n",strerror(status));
    }



	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");

	} 
	
	else {
		printf("file opened successfully %d \n", fd);
	}

	ioctl(fd, getpid(), 10);

	pthread_exit(NULL);

	close(fd);

	return 0;
}
