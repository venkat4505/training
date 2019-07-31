//to delete node t nsert_begin(dll head);penultinate position

#include"header.h"

sll delete_pun(sll head)
{
	sll current;

	current = head;

	if(current -> next == NULL) {
		printf("......there is no penultinate node\n");
		return head;
	}
	
	if((current -> next) -> next == NULL) {
		current -> next = NULL;
	}

	else {
		
		while(current -> next != NULL) {
			
			if ((((current -> next) -> next) -> next) == NULL) {
				current -> next = (current -> next) -> next;
				break;
			}

			else {
				current = current -> next;
			}
		}
	}
	return head;
}
