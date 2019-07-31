//To display the linked list

#include"header.h"

void display(sll head)//to display the list of elements
{
	sll current;     

	current = head;

	while(current != NULL){
		printf("%d\t",current -> data);
		current = current -> next;
	}
	printf("\n");
}  
