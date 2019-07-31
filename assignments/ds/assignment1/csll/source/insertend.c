//to insert at end for csll

#include"header.h"                                                              
                                                                                
csll insert_end(csll head)//function to insert at end                                                    
{                                                                               
    char str1[MAX];                                                             
    csll new; //new node 
	csll current;//to traverse and point to current node
	current = head;                                                                  
                                                                                
    if (NULL == (new = (csll)malloc(sizeof(csll)))){//dynamic memory allocationto new                             
        perror("malloc FAILED");                                                
        exit(1);                                                                
    }                                                                           
                                                                                
    printf("ENTER THE ELEMENT:");//the data in node                                               
    if (NULL == (fgets(str1, MAX, stdin))){//redas data from stdin
		perror("fgets FAILED");
		exit(1);
	}                                                   
    rem_enter(str1); //removes enter                                                           
    new -> data = isvalid(str1); //atoi validation                                               
                                                                                
                                                                                
    if ( NULL == head){ //if no node is there                                                        
        head = new;                                                             
        new -> next = head;                                                     
    }

	else{
		
		while(current -> next != head) {
			current = current -> next;       
		}
				current -> next = new;
				new -> next = head;
		}
	return head;
}				                                        
