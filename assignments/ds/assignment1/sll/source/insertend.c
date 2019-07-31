//to insert data at the end in sll

#include"header.h"//header files

sll insert_end(sll head)//called function to insert at end
{ 
	char str1[MAX];
	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))){//dynamic memory allocation
		perror("malloc FAILED");
		exit(0);
	}

	printf("ENTER THE ELEMENT:");//data to be entered

	if ( NULL == (fgets(str1, MAX, stdin))) {//read the data                
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                   
    rem_enter(str1);             //remove the enter                                   
    new -> data = isvalid(str1);//atoi validation

	current = head; //assigning head to current 
	
	if (head == NULL) {//if there is no node
		head = new;
		new -> next = NULL;
	}
	else {     //when there is some node available

		while(current -> next != NULL) {//traverse to the last node
			current = current -> next;
		}

	current -> next = new;
	new -> next = NULL;
	}
	return head;
}
