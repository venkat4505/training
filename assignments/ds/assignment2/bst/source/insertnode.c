//function definition to insert node                                            
                                                                               
#include"header.h"

tree insert_node(tree root)                                                     
{                                                                               
    char str1[MAX];
	tree current;//to traverse through nodes                                                               
    tree new;    //new node                                                               
//    root = NULL;

	if (NULL == (new = (tree)malloc(sizeof(tree)))){//malloc validation
		perror("out of memory");
		exit(1);
	}                                          
                                                                                
    printf("ENTER THE ELEMENT:");
	
	if (NULL == (fgets(str1, MAX, stdin))) {//read the data from stdin      
        perror("fgets failed");                                             
     }  
                                                                     
    rem_enter(str1);        //removes enter 
	new -> data = isvalid(str1); //atoi validation                                                         
                                                                                
    current = root;                                                             
                                                                                
    if ( root == NULL) {                                                        
                                                                                
        root  = new;                                                            
        new -> rchild = NULL;                                                   
        new -> lchild = NULL;                                                   
    }  

	else {

		while (current != NULL) {

			if((new -> data) < (current -> data)) {

				if((current -> lchild) == NULL) {

					current -> lchild = new;
					new -> lchild = NULL;
					new -> rchild = NULL;
					break;
				}
				else {
					current = current -> lchild;
				}
			}
			else {
		
				if(current -> rchild == NULL) {

					current -> rchild = new;
					new -> lchild = NULL;
					new -> rchild = NULL;
					break;
				}
					
				else {
					current = current -> rchild;
				}
			}	
		}	
	}
	return root;
}                                        
