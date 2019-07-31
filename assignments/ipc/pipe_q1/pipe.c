/*unnamed pipe creation
 *
 *
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int status;
	int pipefd[2]; /*file  descriptors  referring to the ends of the pipe*/
	pid_t pid;

	char *str1 = NULL;
	char *str2 = NULL;

	str1 = (char *) malloc (sizeof (char) * 32);
	str2 = (char *) malloc (sizeof (char) * 32);

	if(-1 == (status = pipe(pipefd))) {/*creating pipe*/
		perror("pipe");
		exit(EXIT_FAILURE);
	}	

	str1 = "welcome";

	if(-1 == (pid = fork())) {/*creating child process*/
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (pid != 0) {/*in parent process*/
		
		close(pipefd[0]);
		write(pipefd[1],str1, strlen(str1));
		close(pipefd[1]);
		//wait(NULL);
	}

	if(pid == 0) {/*in child process*/
		close(pipefd[0]);

		while(read(pipefd[0], str2,1) > 0)
		printf("%s",str2);
		printf("\n");
		close(pipefd[0]);
		exit(0);
	}

	return 0;
}
