//to display tree using in order                                               
                                                                                
#include"header.h"                                                              
                                                                                
void in_order(tree root)                                                      
{                                                                               
                                                                                
    if (root != NULL) {                                           
                                                                                
        in_order(root -> lchild);                                             
        
		printf("%d\n",(root -> data));           
                                                                        
        in_order(root -> rchild);                                                                         
    }                                                                           
}                        
