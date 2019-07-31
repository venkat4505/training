//To display the circular single linked list                                                    
                                                                                
#include"header.h"                                                              
                                                                                
void display(csll head)//to display the list of elements                         
{                                                                               
    csll current;                                                                
                                                                                
    current = head;//initializing current with head                     

	if (head == NULL) {
		printf("NO NODE AVAILABLE");
	}

	else {        
                                                                         
    do {                                                  
        printf("%d\t",current -> data);                                         
        current = current -> next;                                              
    } while(current  != head);

	}
                                                                            
    printf("\n");                                                               
}                         
