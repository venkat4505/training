//to delete before the given position

#include"header.h"

sll delete_bpos(sll head)
{
	sll current;//to throgh the nodes
	char str1[MAX];
	int pos;//the position where node is to be deleted
	int count = 1;

	printf("enter the position:");//position to be entered                           
    fgets(str1, MAX, stdin);     //reading the position                                
    rem_enter(str1);             //remove the enter                                   
    pos = isvalid(str1);//atoi validation

	current = head;

	if (1 == pos || 2 == pos) {
		head = current -> next;
	}
	
	else {
		
		while (current -> next != NULL) {
			
			if(count == (pos -2)) {
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
