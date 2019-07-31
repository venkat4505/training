//to display tree using post order                                               
                                                                                
#include"header.h"                                                              
                                                                                
void post_order(tree root)                                                       
{                                                                               
                                                                                
    if (root != NULL) {                                           
                                                                                
        post_order(root -> lchild);                                              
                                                                                
        post_order(root -> rchild);    

		printf("%d\n",(root -> data));                                            
    }                                                                           
}                                            
