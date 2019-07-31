//asynchronous Alarm programme using fork

#include"header.h"                                                  
 
int main (int argc, char *argv[])
{

	int seconds;
	char line[120];
	char msg[64];

	signal(SIGCHLD,SIG_IGN);

	printf("PID -> %d\n",getpid());
	while(1) {
		
		printf ("------------------ALARM---------------\n");		
		
		if (NULL ==(fgets(line, sizeof(line), stdin))) {
			printf ("fgets failed..\n");
			exit (0);
		}
	
		if (strlen (line) <= 1) continue;
	
		if (sscanf(line, "%d %64[^\n]", &seconds, msg) > 2) {
			fprintf (stderr, "bad command\n");
		} 
		
		else {
				int pid;
			 	pid = fork();		

				if(pid == 0) {
					sleep(seconds);
					printf ("[%d] %s\n", seconds, msg);
					exit(0);
				}	
			
				
		}
	}

	return 0;
}		
