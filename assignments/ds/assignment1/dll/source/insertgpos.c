//to insert data at the given position                 
                                                                                
#include"header.h"                                                              
                                                                                
dll insert_gpos(dll head)                                                        
{                                                                               
                                                                                
    char str1[MAX];                                                             
    char str2[MAX];                                                             
    int pos;// position at which data needs to be inserted                      
    int count = 1;//to count the nodes                                            

	dll new; //new node creation                                                
    dll current;//currenrt node for traversing                                  
                                                                                
                                                                                
    if (NULL == (new = (dll)malloc(sizeof(dll)))) { //dynamic memory allocation 
        perror("malloc FAILED ");                                            
        exit(1);                                                                
    }            

	printf("enter the position:");//data to be entered                           
    fgets(str1, MAX, stdin);     //reading the data                                      
    rem_enter(str1);             //remove the enter                                   
//    new -> data = isvalid(str2);//atoi validation      
	pos = isvalid(str1);//atoi validation                                
                                                                                
    current = head;//assigning current with head       

	printf("enter the element:");//data to be entered                           
    fgets(str2, MAX, stdin);     //reading the data                                      
    rem_enter(str2);             //remove the enter
	new -> data = isvalid(str2);//atoi validation   	     

	if (pos == 1) {
		current -> prev = new;
		new -> next = head;
		head = new;
		new -> prev = NULL;
	}
	
	else {

		while (current != NULL) {
		
			if(count == (pos -1)) {
				new -> next = current -> next;
				current -> next = new;
				new -> prev = current;
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
