//to insert node at the end                                                   
                                                                                
#include"header.h"                                                              
                                                                                
dll insert_end(dll head)                                                      
{                                                                               
    char str1[MAX];                                                             
    dll current;  //to represent current node                                                              
    dll new;      //to create new node                                   
                                                                                
    current = head;//initializing current to head                                                             
                                                                                
    if (NULL == (new = (dll)malloc(sizeof(dll)))){//dynamic memory allocation                              
        perror("out of memory");                                                
        exit(1);                                                                
    }                                                                           
                                                                                
    printf("enter the element:");                                               
    fgets(str1, MAX, stdin);  //reading elements                                                  
    rem_enter(str1);          //remove enter                                                  
    new -> data = isvalid(str1); //atoi validation                                               
                                                                                
    if ( NULL == head){                                                         
        head = new;                                                             
        new -> prev = NULL;                                                     
        new -> next = NULL;                                                     
    }                                                                           
	
	else {

		while (current != NULL) {
			
			if(current -> next == NULL) {
				current -> next = new;
				new -> prev = current;
				new -> next = NULL;
				break;
			}
		
			else {
				current = current -> next;
			}
		}
	}
	return head;
}
