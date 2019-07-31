//to insert data in the middle

#include"header.h"

sll insert_mid(sll head)
{

	char str1[MAX];
	char str2[MAX];
	int pos;// number before which data needs to be inserted
	int count = 0;
	int flag = 1;

	sll new; //new node creation
	sll current;//currenrt node for traversing
	

	if (NULL == (new = (sll)malloc(sizeof(sll)))) { //dynamic memory allocation
		perror("malloc failed in ");
		exit(0);
	}                

	printf("enter the element:");//data to be entered
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

	if(1 == pos) {
		new -> next = head;
		head = new;
	}

	else {
		
		while(current != NULL) {
			
			if (flag == (pos - 1)) {
				new -> next = current -> next;
				current -> next = new;
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
