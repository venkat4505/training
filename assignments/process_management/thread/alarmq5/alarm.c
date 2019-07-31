//asynchronous Alarm programme

#include"header.h"                                                  
 
//************thread function*************

void *thread_function(void *arg)
{
	int seconds;                                                            
 	char msg[64];   

	printf("TID OF THREAD -> %ld\n",syscall(SYS_gettid));

	char *line = (char *) arg;

	 if (sscanf(line, "%d %64[^\n]", &seconds, msg) > 2) {                   
     	fprintf (stderr, "bad command\n");                                  
     }  
                     
	sleep(seconds);
	printf ("[%d] %s\n", seconds,msg); 

	return NULL;
}

//***********Main Function****************

int main (int argc, char *argv[])
{
	pthread_t th_id;
	int status;
	char line[120];

//	signal(SIGCHLD,SIG_IGN);

	printf("PID -> %d\n",getpid());

	while(1) {
		
		printf ("------------------ALARM---------------\n");		
		
		if (NULL ==(fgets(line, sizeof(line), stdin))) {
			printf ("fgets failed..\n");
			exit (0);
		}
	
		if (strlen (line) <= 1) continue;


			if(0 != (status = pthread_create(&th_id,NULL,thread_function,&line))) {
				printf("creating thread failed\n");
			}
	}
	
			pthread_exit(NULL);
	
	return 0;
}		
