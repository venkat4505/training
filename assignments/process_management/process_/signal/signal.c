//handling of signals 

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<string.h>

//void signal_hand(int signum);

void signal_handler(int signum)
{
	printf("signal number -> %d\n",signum);
	
	printf("Sorry check again....segmentation fault occured\n");
	printf("%s\n",strerror(signum));
//	signal(SIGINT,signal_hand);

	exit(1);	
}

 void signal_hand(int signum)                                             
{                                                                           
	printf("signal number -> %d\n",signum);                                 
                                                                            
   	printf("process stopped\n");                                 
                                         
	return;                                                                 
}                 

int main()
{
	signal(SIGSEGV,signal_handler);

//	signal(SIGINT,signal_hand); 
	printf("%s\n",strerror(11));

	int *p = NULL;
	*p = 123;
//	while(1);
	return 0;
}
