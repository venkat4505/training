//to delete a node at the begining

#include"header.h"

sll delete_begin(sll head)
{

	sll current;//currenrt node for traversing
	current = head;

	if(NULL == head) {
	
		printf("no node available\n");
	}

	else {

		head = current -> next;
		current -> next = NULL;
	}
	return head;
}
