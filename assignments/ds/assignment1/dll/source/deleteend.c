//to delete a node at the begining                                              
                                                                                
#include"header.h"                                                              
                                                                                
dll delete_end(dll head)                                                      
{                                                                               
                                                                                
    dll current;//currenrt node for traversing                                  
    current = head;//initializing current with head
	
	if(current -> next == NULL) {
		head = NULL;
		//current -> prev = NULL;
	}
	
	else {
		while((current -> next)  != NULL) {

			if((current -> next) -> next == NULL) {
				current -> next = NULL;
				//(current -> next) -> prev = NULL;
				break;
			}		

			else {
				current = current -> next;
			}	 
		}
	}
	return head;
}                   
