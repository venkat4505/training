/* 
 * Asynchrounous alarm with mutual exclusion 
 *
 */

#include "header.h"

/* alarm structure with mutex instance, condition for synchronisation, seconds,
 *  message to display and pointer to stucture
 */

//***************structure******************
typedef struct alarmt {
	pthread_mutex_t mutex;
//	pthread_cond_t cond;
	int sec;
	char mesg[100];
	struct alarmt *next;

}Alarm_t;

Alarm_t *head;

//**************thread function********************
void *Alarm_thread(void *arg) 
{
	int p;
	int diff = 0;
	Alarm_t *alarm = NULL;


	while(1) {

		if(NULL == (alarm = ((Alarm_t *)malloc(sizeof(Alarm_t)))))		
			errno_abort("malloc is failed");

		p = pthread_mutex_init (&alarm -> mutex, NULL);
		if(p != 0) 
			err_abort(p ,"init mutex is failed");

		if(head == NULL){
			diff = 0;		
			sleep(1);
			continue;	
		}

		else {
			p = pthread_mutex_lock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock is failed");
			else {
				alarm = (Alarm_t *)head;
			}
			
			p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

			sleep((alarm -> sec) - diff);
			printf("(%d) %s\n",alarm->sec, alarm->mesg);

			diff = alarm->sec;			

			head = head -> next;

			free(alarm);
			alarm = NULL;

		}
	}
	return NULL;
}

//**********************Main Function*******************************

int main(int argc, char *argv[])
{
	char line[120];
	int status;
	pid_t pid;
	Alarm_t *alarm = NULL;//new node
	Alarm_t *current = NULL;//current node
	pthread_t th_id;

	status = pthread_create(&th_id, NULL, Alarm_thread, NULL);
	if(status != 0)
		err_abort(status, "pthread_create failed");


	while(1) {
		printf("Alarm: ");

		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(NULL == (alarm = ((Alarm_t *)malloc(sizeof(Alarm_t)))))		
			errno_abort("malloc is failed");

		if (0!= (status = (pthread_mutex_init (&alarm -> mutex, NULL) ) ) )
			err_abort(status ,"init mutex is failed");

/*		status = pthread_cond_init (&alarm -> cond, NULL);
		if(status != 0) 
			err_abort(status ,"init mutex is failed");
*/
		if (0!= (status = (pthread_mutex_lock (&alarm -> mutex)) ) )
			err_abort(status ,"mutex lock is failed");

		else {
			if(sscanf(line, "%d %64[^\n]",&alarm -> sec, alarm -> mesg) > 2) {
				fprintf(stderr,"Bad command"); 
				continue;
			} 

//creating linked list of time
			current = head;

			if(head == NULL) {
				head = alarm;
				alarm->next = NULL;
			}
			else if ((current -> sec) >= (alarm -> sec)) {//new data is less
					alarm->next = head;
					head = alarm;
			}

			else if( ((alarm -> sec) >= (current -> sec))&& (current -> next == NULL)) {//new data is greater and only 1 node is present
				current -> next = alarm;
				alarm -> next = NULL;
			}
			
			else {					
				current = head;
				while ( current != NULL) {

					if ((current -> next -> sec) >= (alarm -> sec)) {
							alarm -> next = current -> next;       
							current -> next = alarm;   
							break;
					}
						
					else {
							current = current -> next;
					}
						
					if(current -> next == NULL) {
								current -> next = alarm;
								alarm -> next = NULL;
								break;
					}	
						
				}//while 
			}//else
			
		if (0 != (status = (pthread_mutex_unlock (&alarm -> mutex) ) ) ) {
	 			err_abort(status ,"mutex unlock is failed");
		}
	}
	pthread_exit(NULL);

	return 0;
	}
}
