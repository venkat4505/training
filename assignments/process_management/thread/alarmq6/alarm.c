#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <signal.h>
#include "header.h"
#define MAX 32

typedef struct member {
	int second;
	char name[MAX]; 
	struct member *next;
	pthread_mutex_t lock;
} MEM;

MEM *head;

//*****************thread function*****************************

void *thread_function (void *p) {
	int status;
	MEM *num;
	num = (MEM *) malloc (sizeof (MEM));
	num = (MEM *)p;

	while (1) {

		if ( head == NULL ) {
			sleep (1);
			continue;
		} 
		
		else {
			status = pthread_mutex_lock (&head -> lock);
			if (status != 0) {
				errno_abort ("Lock failed");
			}	
		
			sleep (head -> second );
			printf("(%d) : %s\n",head->second, head->name);

			status = pthread_mutex_unlock (&head -> lock);
			if (status != 0) {
				errno_abort ("Lock failed");
			}	

			head = head -> next;
		}
	}
    return NULL;
}

//**************************Main Function************************

int main (void) {
	char line[MAX];
    int status;
    pthread_t th_id;
	head = NULL;
	
	status = pthread_create (&th_id, NULL, thread_function, head);
	if (status != 0) {
		errno_abort ("pthread_create failed..\n");
    }				

	while(1) {
	
		MEM *node;//new node creation
		node = (MEM *) malloc (sizeof (MEM));

		if (0 != (status = (pthread_mutex_init ( &node -> lock, NULL) ) ) ) {//initialize mutex
			errno_abort ("Init mutex");
		}	
		
		printf ("alaram...");
		if (NULL ==(fgets(line, sizeof(line), stdin))) {//input into buffer
			errno_abort ("fgets failed..\n");
			exit (0);
		}	
		
		if (0 != (status = (pthread_mutex_lock (&node -> lock) ) ) ) { //locking the node          
			errno_abort ("Lock failed");
		}	

		if (sscanf(line, "%d %64[^\n]", &(node -> second), node -> name) > 2) {
				errno_abort ("bad command\n");
		}	
		
		if ( head == NULL) {
			node -> next = NULL;
			head = node;
		} 
		
		else {
			node -> next = head;
			head = node;
    	}
		status = pthread_mutex_unlock (&node -> lock);//unlock the node
		if (status != 0) {
			errno_abort ("UnLock failed");
		}	
	}
	pthread_exit (NULL);

    return 0;
}
