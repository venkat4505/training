//to delete node after a given number                                          
                                                                                
#include"header.h"                                                              
                                                                                
sll delete_anum(sll head)                                                       
{                                                                               
    sll current;                                                                
    char str1[MAX];                                                             
    int num;//the number after which node is to be deleted                     
                                                                                
    printf("enter the number:");//number to be entered                           
    fgets(str1, MAX, stdin);     //reading the position                                
    rem_enter(str1);             //remove the enter                                   
    num = isvalid(str1);//atoi validation                                       
                                                                                
    current = head;    

	while(current -> next != NULL) {

		if(current -> data == num) {

			current -> next = (current -> next) -> next;
		//	(current -> next) -> next = NULL;
			break;
		}	

		else { 
			current = current -> next;
		}
	}
	return head;
}		            
