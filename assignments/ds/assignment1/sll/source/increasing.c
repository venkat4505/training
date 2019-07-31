//to insert node in increasing order

#include"header.h"

sll insert_increasing(sll head)//insert at begining                                  
{
	char str1[MAX];                                                             
   	sll current;
	 sll new;//new node to be inserted                                           
                                                                                   
  	current = head;	
	
	  if (NULL == (new = (sll)malloc(sizeof(sll)))){//dynamic memory allocation
		perror("malloc FAILED");                                                
        exit(0);                                                                
    }                                                                           
                                                                                  
    printf("ENTER THE ELEMENT:");                                               
                                                                                  
   if ( NULL == (fgets(str1, MAX, stdin))) {//read the data                    
        perror("fgets FAILED");                                                 
        exit(0);                                                                
   }                                                                           
   rem_enter(str1);         //remove enter                                       
   new -> data = isvalid(str1); //atoi validation   

	if ( NULL == head){//if there is no node                               
        head = new;                              
		new -> next = NULL;                                                     
    } 


	else if (new -> data <= current -> data) {
		new -> next = current;
		head = new;
	}
	
	else if (new -> data >= current -> data && current -> next == NULL) {
		current -> next = new;
		new -> next = NULL;
	}
	
	else {
			current = head;
		
		while(current != NULL) {
	
		/*	if (current -> next -> data <= new -> data) {
				new -> next = current -> next -> next;
				current -> next -> next = new;
				break;
			}*/

			 if(new -> data <= current -> next -> data) {
				new -> next = current -> next;
				current -> next = new;
				break;
			}
			
			else {
				current = current -> next;
			}
			
			if (current -> next == NULL) {                                      
                current -> next = new;                                          
                new -> next = NULL;                                             
                break;       
		   }                  
			
		}
	}
	
	return head;	
}                                             
