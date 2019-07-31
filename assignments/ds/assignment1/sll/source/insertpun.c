//to insert at penultinate node

#include"header.h"

sll insert_pun(sll head)
{
	char str1[MAX];
	int num;// number before which data needs to be inserted

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
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

	current = head;
		
	while(current -> next != NULL) {

		if(((current -> next) -> next) == NULL) {
			new -> next = current -> next;
			current -> next = new;
			break;
		}
		
		else {
			current = current -> next;
		}
	}
	return head;
}
