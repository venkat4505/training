//To display the linked list                                                    
                                                                                
#include"header.h"                                                              
                                                                                
void display(dll head)//to display the list of elements                         
{                                                                               
    dll current;                                                                
                                                                                
    current = head;//initializing current with head                             
                                                                                
    while(current != NULL){                                                     
        printf("%d\t",current -> data);                                         
        current = current -> next;                                              
    }                                                                           
    printf("\n");                                                               
}                         
