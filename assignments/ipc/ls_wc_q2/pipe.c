/*implementing ls | wc 
	->dup2 - makes newfd be the copy of oldfd or dupliate a file descriptor
	->pipe -creates a pipe
	->close - 
	->execlp - execute a file
*/
	
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main()
{
	int pipefd[2]; /*2 file descriptors referring to the 2 ends of pipe*/
	pid_t pid;


	if (pipe(pipefd) == -1) {/*creating pipe*/
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	pid = fork();/*creating child process*/
	if (pid == -1) {
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (pid == 0) {  /*in child process*/
		
		dup2(pipefd[0], 0);	 /*reading(stdin) from pipe by wc */
		close(pipefd[1]);    /*close unused write end*/      

		execlp("wc","wc",NULL);	
		exit(EXIT_SUCCESS);

	} else {           /*in parent process*/
	   	
		dup2(pipefd[1], 1);	/*writing the o/p of ls from stdout into pipe*/
		close(pipefd[0]);          /* Close unused read end */

		execlp("ls","ls",NULL);	

		exit(EXIT_SUCCESS);
	}
}


