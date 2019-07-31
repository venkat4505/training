#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#define MAX 64

int main()
{
	//while (1) {
	char *argv[10];

	char *command = NULL;
	
	command = (char *)malloc(sizeof(char)*MAX);
	
	char *path = NULL;
	
	path = (char *)malloc(sizeof(char)*MAX);

	
	strcpy(path,"/bin/");
 	
		while (1) {
			fgets(command,MAX,stdin);
			*(command+strlen(command)-1) = '\0';

			if ( !strcmp(command,"exit") )
			exit(0);

			strcpy(argv[0],command);
			argv[1]=NULL;
			strcat(path,command);
//	}
			int pid  = fork();
		
			execvp(path,argv);
		
			if(pid == 0 ) {  
				printf("child process\n");
			}	
	
			if (pid > 0) {
				wait(NULL);
				printf("child went\n");
			}	
		}
		return 0;
	}
		
