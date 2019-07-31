//to insert after a given number

#include"header.h"

sll insert_anum(sll head)
{
	char str1[MAX];
	char str2[MAX];
	int num;// number before which data needs to be inserted

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
		perror("malloc FAILED ");
		exit(0);
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

	current = head;//assigning current with head

	while(NULL != current) {//runs loop untill NULL is encountered

		if(current -> data == num) {//if number is equal to data then it executes
			new -> next = current -> next;
			current -> next = new;
			break;
		}

		else {
			current = current -> next;//moves to next node
		}
	}
	return head;//returns upadated head to calling function
}
