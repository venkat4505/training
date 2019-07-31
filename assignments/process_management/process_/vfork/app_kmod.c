#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main( void )
{
	int fd;

	fd = open("/dev/myChar", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");

	} 
	
	else {
		printf("file opened successfully %d \n", fd);
	}
	
	vfork();
	
	ioctl(fd, getpid(), 10);

	close(fd);

	return 0;
}
