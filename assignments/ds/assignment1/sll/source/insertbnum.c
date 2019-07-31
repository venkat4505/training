//to insert element before given number

#include"header.h"

sll insert_bnum(sll head)
{
	char str1[MAX];
	char str2[MAX];
	int num;// number before which data needs to be inserted
//	int count = 1;

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
		perror("malloc FAILED ");
		exit(1);
	}

	 if (NULL == (current = (sll)malloc(sizeof(sll)))) {//dynamic memory allocation                              
        perror("malloc FAILED");                                                
        exit(1);                                                                
    }
	
	printf("ENTER THE GIVEN NUMBER:");//position to be entered
	if ( NULL == (fgets(str1, MAX, stdin))) {//read the data                  
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                                               
    rem_enter(str1);             //remove the enter                                   
    num = isvalid(str1);//atoi validation                  

	printf("ENTER THE ELEMENT:");//data to be entered
	if ( NULL == (fgets(str2, MAX, stdin))) {//read the data                  
        perror("fgets FAILED");                                                 
        exit(0);                                                                
    }                                                    
    rem_enter(str2);             //remove the enter                                   
    new -> data = isvalid(str2);//atoi validation

	current = head;

	if (current -> data == num) {
		new -> next = head;
		head = new;
	}

	else {

	while(current -> next != NULL) {

		if (num == ((current -> next) -> data)) {

			new -> next = current -> next;
			current -> next = new;
			break;
		}

		else {
			current = current -> next;
		}
	}
	}
		return head;
}
