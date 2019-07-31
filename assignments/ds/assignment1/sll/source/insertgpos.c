//to insert at a given position

#include"header.h"

sll insert_gpos(sll head)//called function
{
	char str1[MAX];
	char str2[MAX];
	int pos;// position where data needs to be inserted
	int count = 1;

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
		perror("malloc FAILED");
		exit(1);
	}

	 if (NULL == (current = (sll)malloc(sizeof(sll)))) {//dynamic memory allocation                              
        perror("malloc FAILED");                                                
        exit(1);                                                                
    }
	
	printf("ENTER THE POSITION:");//position to be entered
	if ( NULL == (fgets(str1, MAX, stdin))) {//read the option                  
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                                             
    rem_enter(str1);             //remove the enter                                   
    pos = isvalid(str1);//atoi validation                  

	printf("ENTER THE ELEMENT:");//data to be entered
	if ( NULL == (fgets(str2, MAX, stdin))) {//read the option                  
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                               
    rem_enter(str2);             //remove the enter                                   
    new -> data = isvalid(str2);//atoi validation

	current = head;
	
	if (1 == pos) {
		new -> next = current;
		head = new;
	}

	else {

	while (NULL != current) {

		if(count == (pos - 1)) {
			new -> next = current -> next;
			current -> next = new;
			break;
		}

		else {
			current = current -> next;
			count ++;
		}
	}
	}
	return head;
}
