//to insert data in the middle

#include"header.h"

dll insert_mid(dll head)
{

	char str1[MAX];
	char str2[MAX];
	int pos;// position at which data needs to be inserted
	int count = 0;//to count the nodes
	int flag = 1;//to keep track of position of current node

	dll new; //new node creation
	dll current;//currenrt node for traversing
	

	if (NULL == (new = (dll)malloc(sizeof(dll)))) { //dynamic memory allocation
		perror("malloc FAILED ");
		exit(1);
	}

	printf("ENTER THE ELEMENT:");//data to be entered
	fgets(str2, MAX, stdin);     //reading the data                                      
    rem_enter(str2);             //remove the enter                                   
    new -> data = isvalid(str2);//atoi validation

	current = head;//assigning current with head

	while(NULL != current) {
		current = current -> next;
		count++;
	}
	
	current = head;

	pos = ((count / 2) + 1);
	
		if ( 1 == pos){    
		new -> next = head;                                                     
        head = new; 
		new -> prev = NULL;                                                
        }
		
		else {
		
		while(current != NULL) {
			
			if (flag == (pos - 1)) {
				new -> next = current -> next;
				current -> next = new;
				new -> prev = current;
				break;
			}

			else {
				current = current -> next;
				flag++;
			}
		}
	}
	return head;
} 
