//to delete node before a given number

#include"header.h"

sll delete_bnum(sll head)
{
	sll current;
	char str1[MAX];
	int num;//the number before which node is to be deleted

	printf("enter the number:");//position to be entered                           
    fgets(str1, MAX, stdin);     //reading the position                                
    rem_enter(str1);             //remove the enter                                   
    num = isvalid(str1);//atoi validation

	
	current = head;
	
	if(current -> data == num) {
		printf("Nothing before this node to delete");
	}

	if((current ->  next) -> data == num) {
		head = current -> next;
	}

	else {
		while(current -> next != NULL) {
			
			if((((current -> next) -> next) ->data) == num) {
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

