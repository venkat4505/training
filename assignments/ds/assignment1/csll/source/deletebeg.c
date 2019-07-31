//to delete node at begining

#include"header.h"

csll delete_begin(csll head)//delete at begining
{                                                                     
    csll current;//points to current node
	csll prevhead;//stores head
	
	current = head;
	prevhead = head;

	head = current -> next;

	current = head;

	if (current -> next == head) {
		head = NULL;
	}
	
	else { 

	while (current -> next != prevhead) {

		current = current -> next;
	}
	
	current -> next = head;
	}

	return head;
}        
