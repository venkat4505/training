/*message queue
	-> mq_getattr
	-> mq_open
	-> mq_receive
*/

#include<stdio.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int status;
	char *str;   
    mqd_t descp;/*message queue descriptor*/
	struct mq_attr *ptr;/*pointer instance of struct containg attributes*/

    str = (char*) malloc(sizeof(char) * 32);

	descp = mq_open("/hi",O_RDWR);/*opens the file*/

	while(1) {
	if(-1 ==(status = (mq_receive(descp,str,(ptr -> mq_msgsize),NULL)))) { /*receives msg in msg queue*/
		perror("mq_receive failed");
	}
	
	printf("the received message : %s\n",str);

	printf("enter the message:");/*accept the input*/  
    fgets(str, 32, stdin);     
    
	if (-1==(status = (mq_send(descp,str,strlen(str)/*ptr -> mq_msgsize*/,2)))) { /*sends msg to msg queue*/
		perror("mq_send failed");
	}
	}
	return 0;
}
