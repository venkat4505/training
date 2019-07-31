//to delete the end node

#include"header.h"

sll delete_end(sll head)
{
	sll current;//current for traversing

	current = head;

	if(NULL == head) {//when there is no node

		printf("no node is available\n");
	}

	else {
	
		if (current -> next == NULL) {
			head = NULL;
			return head;
		}
		
		while(current -> next != NULL) {//run loop till the end node
			
			if ((current -> next) -> next == NULL) {
				
				current -> next = NULL;
				break;
			}

			else {
				
				current = current -> next;
			}
		}
	}
	return head;
}
