//to delete the node in the middle

#include"header.h"

dll delete_mid(dll head)
{
	dll current;//to throgh the nodes
	int pos;
	int count = 0;
	int flag = 1;

	current = head;//to traverse through nodes

	while (current != NULL) {
		current = current -> next;
		count ++;
	}

	pos = ((count / 2) + 1);

	current = head;
	
	while (current != NULL) {

		if(flag == (pos - 1)) {
			current -> next = (current -> next) -> next;
			break;
		}

		else {
			current = current -> next;
			flag ++;
		}
	}
	return head;
}	
