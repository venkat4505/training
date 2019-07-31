/*
scheduling priority and policy for a real time thread
	man the following functions
	1 -> pthread_attr_init
	2 -> pthread_setschedparam
	3 -> pthread_create
	4 -> pthread_getattr_np
	5 -> pthread_getschedparam
*/

#define _GNU_SOURCE
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>

void *thread_fun(void *arg)
{
	pthread_attr_t gattr;
	struct sched_param prio;
	
	int s;
	int i;
	
	s = pthread_getattr_np(pthread_self(), &gattr);//get attributes of created thread

	s = pthread_getschedparam(pthread_self(), &i, &prio);//returns the scheduling policy and parameters of thread
	
	if(i == SCHED_RR)
		printf("SCHEDULING POLICY   :  SCHED_RR\n");
		printf("SCHEDULING PRIORITY :  %d\n",prio.sched_priority);

	return NULL;
}

int main()
{
	pthread_t th_id;//thread id
	pthread_attr_t attr;//thread attributes
	struct sched_param prio;//instance of structure sched_param

	prio.sched_priority = 87;//assigning priority to sched_priority  member of the structure

	int status;

	status = pthread_attr_init(&attr);//initializing thread attributes,success-> 0,error -> non zero value
	
	if(status != 0)
		printf("pthread is failed\n");


/*	p = pthread_attr_setinheritsched(&attr, PTHREAD_EXPLICIT_SCHED);
	if(p != 0)
		printf("pthrakhed is failed\n");
*/
	
	status = pthread_setschedparam(pthread_self(), SCHED_RR, &prio);//sets shduling policy and parametrs of thread,success->0,error->non zero
	if(status != 0)
		printf("pthreadi is failed\n");

	status = pthread_create(&th_id, &attr, thread_fun, NULL);//creating a thread
	if(status != 0)
		printf("pthreadj is failed\n");

	
	pthread_exit(NULL);
	return 0;
}
