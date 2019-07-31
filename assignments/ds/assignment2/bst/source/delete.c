//to delete node in binary search tree

#include<header.h>

tree delete_sichild(tree root)
{

	int number;
	char str1[MAX];                                                             
    tree current;//to traverse through nodes  
	tree temp;
	
	printf("ENTER THE NUMBER:");                                               
                                                                                
    if (NULL == (fgets(str1, MAX, stdin))) {//read the data from stdin          
        perror("fgets failed");                                                 
     }                                                                          
                                                                                
    rem_enter(str1);        //removes enter                                     
    number = isvalid(str1); //atoi validation                                                         
                                                                                
    current = root;         

	while(current != NULL) {

		if(number < (current -> data)) {//if number is on left side of root

			if (number == (current -> lchild) -> data) {//check where the number is
				
				if (current -> lchild -> lchild == NULL && current -> lchild -> rchild == NULL) {//no child
					current -> lchild = NULL;
					break;
				}

				if (current -> lchild -> lchild != NULL && current -> lchild -> rchild != NULL) {//double child
					temp = current;
					temp = temp -> lchild -> lchild;
						while (temp != NULL ) {

							if (temp -> rchild == NULL ) {
								
								if (temp -> lchild != NULL) {
									current -> lchild -> data = temp -> data;       
                                    temp -> data = temp -> lchild -> data;
									temp -> lchild = NULL;                                    
                                    break;
								} 
								else {                                   
									current -> lchild -> data = temp -> data;
									temp = NULL;
									break;
								}
							}
							else {
								temp = temp -> rchild;
							}
						}
					break;
				}

				if (((current -> lchild) -> rchild) == NULL) { //single child
				current -> lchild = ((current -> lchild) -> lchild);
				break;
				}
				else {
				current -> lchild = ((current -> lchild) -> rchild);
				break;
			 	}
			}

			else { 
				current = current -> lchild ;
			}
		}

		else {

			if( number == (current -> rchild) -> data) {

				 if (current -> rchild -> lchild == NULL && current -> rchild -> rchild == NULL) {//no child
                    current -> rchild = NULL;
					break;                                   
                }            
		
				if (current -> rchild -> lchild != NULL && current -> rchild -> rchild != NULL) {//double child
					temp = current;
					temp = temp -> rchild -> lchild;
					while (temp != NULL) {
					
						if (temp -> rchild == NULL) {
							
							if (temp -> lchild != NULL) {
								current -> rchild -> data = temp -> data;
								temp -> data = temp -> lchild -> data;
								temp -> lchild = NULL;
								break;
							}
							else {
								current -> rchild -> data = temp -> data;
								temp = NULL;
								break;
							}
						}
						
						else {
							temp = temp -> rchild;
					 	}
					}
				break;
			}

				if(((current -> rchild) -> lchild) == NULL) {//single child
				 current -> rchild = ((current -> rchild) -> rchild);    
				 break;        
				}
				else {
					current -> rchild = ((current -> rchild) -> lchild); 
					break;
				}    
            }                                                                   
                                                                                
            else {                                                              
                current = current -> rchild ;                                   
            } 
		}
		}
	return root;
}                                  
