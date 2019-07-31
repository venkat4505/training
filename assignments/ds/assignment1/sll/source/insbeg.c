//to insert node at begin in sll

#include"header.h"

sll insert_begin(sll head)//insert at begining
{
	char str1[MAX];
	sll new;//new node to be inserted

	if (NULL == (new = (sll)malloc(sizeof(sll)))){//dynamic memory allocation
		perror("malloc FAILED");
		exit(0);
	}

	printf("ENTER THE ELEMENT:");

	if ( NULL == (fgets(str1, MAX, stdin))) {//read the data                  
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                                
    rem_enter(str1);         //remove enter                                       
    new -> data = isvalid(str1); //atoi validation


	if ( NULL == head){//if there is no node
		head = new;
		new -> next = NULL;
	}
	
	else{//when any node is available
		new -> next = head;
		head = new;
	}
	return head;
}
