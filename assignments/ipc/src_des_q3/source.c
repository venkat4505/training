/*to communicate b/w src and dest using named pipe
	-> mkfifo - create named pipes with given names
	-> open - open a file & returns a file descriptor
	-> write - writes to a file descriptor
	-> close - closes a file
	-> fgets 
	-> unlink - removes a file
*/

#include "errors.h"
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

#define MAX 32

int main()
{

	int fd;

	char *str = NULL;

	int status;

	if(NULL == (str = (char *)malloc(sizeof(char) * MAX))) {
		printf("malloc is failed \n");
		exit(1);
	}

	status = mkfifo("./src", 0644);/*create named pipe*/
	if(status != 0){
		err_abort(status, "mkfifo is failed");
	}

	fd = open("./src", O_WRONLY);/*opens a file & returns file descriptor*/
	if(fd < 0) {
		err_abort(fd, "open is failed");
	}

	printf("\nenter the string:");/*accept the input*/
	fgets(str, MAX, stdin);

	write(fd, str, MAX);/*write to a file descriptor*/

	close(fd);/*closes a file descriptor*/

	unlink("./src");/*remove specified file*/

	return 0;
}
