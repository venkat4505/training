//to insert in the begining for csll

#include"header.h"

csll insert_begin(csll head)//insert at begining
{
	char str1[MAX];
	csll new;
	csll current;//points to current node

	if (NULL == (new = (csll)malloc(sizeof(csll)))){//dynamic memory allocation
		perror("malloc FAILED");
		exit(0);
	}

	printf("ENTER THE ELEMENT:");

	if ( NULL == (fgets(str1, MAX, stdin))) {//read the data from stdin           
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                   
    rem_enter(str1); //removes enter                                                
    new -> data = isvalid(str1);//atoi validation 

	if ( NULL == head){//when there is no node in the list
		head = new;
		new -> next = head;
	}

	else{
		current = head;
		new -> next = current;

	while (current -> next != head) {
		current = current -> next;
	}

	head = new;
	current -> next = head;
	}
	return head;
}	
