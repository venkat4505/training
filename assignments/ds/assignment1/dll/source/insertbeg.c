//to insert node at begining                                        
                                                                                
#include"header.h"                                                              
                                                                                
dll insert_begin(dll head)                                                        
{        
	char str1[MAX];                                                                       
    dll current;
	dll new;                                                                
                                                                                
    current = head;

	if (NULL == (new = (dll)malloc(sizeof(dll)))){                              
        perror("out of memory");                                                
        exit(1);                                                                
    }                                                                           
                                                                                
    printf("enter the element:");                                               
    fgets(str1, MAX, stdin);                                                    
    rem_enter(str1);                                                            
    new -> data = isvalid(str1);   

	if ( NULL == head){                                                         
        head = new; 
		new -> prev = NULL;                                                            
        new -> next = NULL;                                                
    } 

	else {      
		new -> next = head;
		head = new;
		current -> prev = new;
		new -> prev = NULL;
	}
	return head;
}                           
