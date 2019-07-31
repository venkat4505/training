//to delete node after the given position

#include"header.h"

sll delete_apos(sll head)
{
	sll current;//to traverse through the nodes
	char str1[MAX];
	int pos;//the position after which node is to be deleted
	int count = 1;

	printf("enter the position:");//position to be entered                           
    fgets(str1, MAX, stdin);     //reading the position                                
    rem_enter(str1);             //remove the enter                                   
    pos = isvalid(str1);//atoi validation

	current = head;

	if (0 == pos) {
		head = current -> next;
	}
	
	else {
		
		while (current -> next != NULL) {
			
			if(count == pos ) {
				current -> next = ((current -> next) -> next);
				break;     
			}

			else {
				current = current -> next;
				count++;
			}
		}
	}
	return head;
}            
