/*message queues
	-> mq_open
	-> mq_getattr
	-> mq_send
	-> mq_unlink
*/

#include<stdio.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
	mqd_t descp;/*message queue descriptor returned by mq_open*/
	char *str;
	int status;
//	struct mq_attr *ptr;/*structure containing attributes*/
 	
	str = (char*) malloc(sizeof(char) * 32);


	descp = mq_open("/hi",O_CREAT | O_RDWR);/*creates and opens a file*/
	
	while(1) {
	printf("enter the message:");/*accept the input*/	
	fgets(str, 32, stdin);

	if (-1 == (status = (mq_send(descp,str,strlen(str)/*ptr -> mq_msgsize*/,1)))) {/*sends msg to msg queue*/ 
		perror("mq_send failed");
	}
	
	if(-1 == (status = (mq_receive(descp,str,ptr -> mq_msgsize,NULL)))) { /*receives msg in msg queue*/
		perror("mq_receive failed");
	}

	printf("the received message : %s\n",str);

	mq_unlink("hi");/*removes a message queue*/
	}
	return 0;
}
