#include<stdio.h>
#include<pthread.h>
#include<syscall.h>
#include<stdlib.h>

int c = 10;

//******thread function**********
void *thread_fun(void *q)
{
	printf("I AM IN THREAD2\n");
	printf("PID OF THREAD2 -> %d\n",getpid());     
	printf("TID OF THREAD2 -> %d\n",syscall(SYS_gettid));
	printf("g_var IN THREAD2 -> %d\n\n",c);   

	return NULL;			
	
}

//******thread function************

void *thread_function(void *p)
{
	pthread_t th_ide;
	int state;
	state = pthread_create(&th_ide, NULL, thread_fun,NULL);
  
    if (state != 0) {
		printf("creating thread failed : %d\n",strerror(state));
    }

//	fork();

	printf("I AM IN THREAD1\n");

	printf("PID OF THREAD1 -> %d\n",getpid());
	printf("TID OF THREAD1 -> %d\n",syscall(SYS_gettid));
	printf("g_var IN THREAD1 -> %d\n\n",c);

	c = 40;

	pthread_exit(NULL);       

	return NULL;
}


//******Main function**************

int main()
{
	pthread_t th_id;
	int status;

	printf("PID -> %d\n",getpid());
	printf("TID -> %d\n",syscall(SYS_gettid));
	printf("g_var -> %d\n\n",c);

	status = pthread_create(&th_id, NULL, thread_function,NULL);

	if (status != 0) {
		printf("creating thread failed : %d\n",strerror(status));
	}

	c = 30;

	pthread_exit(NULL);

	return 0;
}
