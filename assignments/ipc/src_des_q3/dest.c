#include "errors.h"
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main()
{

	int fd;
	char *str = NULL;

	if(NULL == (str = (char *)malloc(sizeof(char) * 20))) {
		printf("malloc is failed \n");
		exit(1);
	}


	fd = open("./src", O_RDONLY);/*opens a file & returns file descriptr*/
	if(fd < 0) {
		err_abort(fd, "open is failed");
	}

	read(fd, str, 32);/*read from a file descriptor*/

	printf("buffer in the file source\n %s \n",str);
	
	close(fd);/*close file descriptor*/
	
	
	return 0;
}
