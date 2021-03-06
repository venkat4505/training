//to insert the element after the given position

#include"header.h"

sll insert_apos(sll head)
{
	char str1[MAX];
	char str2[MAX];
	int pos;// position where data needs to be inserted
	int count = 1;

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
		perror("malloc failed in ");
		exit(1);
	}

	 if (NULL == (current = (sll)malloc(sizeof(sll)))) {//dynamic memory allocation                              
        perror("out of memory");                                                
        exit(1);                                                                
    }
	
	printf("enter the position:");//position to be entered                           
    fgets(str1, MAX, stdin);     //reading the data                                      
    rem_enter(str1);             //remove the enter                                   
    pos = isvalid(str1);//atoi validation                  

	printf("enter the element:");//data to be entered
	fgets(str2, MAX, stdin);     //reading the data                                      
    rem_enter(str2);             //remove the enter                                   
    new -> data = isvalid(str2);//atoi validation

	current = head;
	
	if (0 == pos) {
		new -> next = current;
		head = new;
	}

	else {

	while (current != NULL) {

		if(count == (pos)) {
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
