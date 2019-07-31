//to delete a node at the begining

#include"header.h"

dll delete_begin(dll head)
{

	dll current;//currenrt node for traversing
	current = head;

	if(NULL == head) {
	
		printf("no node available\n");
	}

	else if(current -> next == NULL) {
		head = NULL;
	}
	
	else {

		head = current -> next;
		(current -> next) -> prev = NULL;
	}
	return head;
}
