#include<stdio.h>
#include<pthread.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include <string.h>

int c = 10;

//******thread function************

void *thread_function(void *arg)
{

//	char ch;

//	FILE *fp = (FILE *)arg;
	int *q = (int *) arg;

	*q = 1000;

	printf("I AM IN THREAD1\n");

	printf("PID OF THREAD -> %d\n",getpid());
	printf("TID OF THREAD -> %ld\n",syscall(SYS_gettid));
	printf("*q IN THREAD -> %d\n",*(int*)arg); 
	printf("g_var IN THREAD -> %d\n",c);
	printf("TID using pthread -> %ld\n\n",pthread_self());

 //file operations
//	fprintf(fp, " software limited");

//	rewind(fp);

/*	while(EOF != (ch = fgetc(fp))) {
	printf("%c",ch);

	}
*/
//	fclose(fp);

	return NULL;
}


//******Main function**************

int main()
{
	int a = 0;
	char ch;
	int status;
	int *q = NULL;
	FILE *fp;
	pthread_t th_id;
 	int *retval;

	q = (int *)malloc(sizeof(int));
	*q = 100;//heap data 

//	fp = fopen("just.txt","w+");//file open

	printf("PID -> %d\n",getpid());
	printf("TID -> %ld\n",syscall(SYS_gettid));
	printf("g_var -> %d\n",c);
	printf("*q -> %d\n",*q);
	printf("TID using pthread -> %ld\n\n",pthread_self());

	status = pthread_create(&th_id, NULL, thread_function,q);//creation of thread
//	pthread_detach(th_id);//detach the thread

//	pthread_join(th_id,(void **)retval);//join the thread

	if (retval != 0) {
		printf("thread joining failed\n");
	}

	if (status != 0) {
		printf("creating thread failed : %s\n",strerror(status));
	}

	c = 30;//global variable

  //file operations


//	fprintf(fp, "global edge");
//	rewind(fp);

/*	while(EOF != (ch = fgetc(fp))) {

	printf("%c",ch);

	}
*/			
//	printf("g_var -> %d\n",c);
	printf("ret value -> %d\n\n",*retval);     
  
	pthread_exit(NULL);

//	printf("ret value -> %d\n",*retval);
//	printf("*q -> %d\n\n",*q);   

//	fclose(fp);
	
	return 0;
}
