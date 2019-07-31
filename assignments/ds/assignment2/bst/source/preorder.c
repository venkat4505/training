//to display tree using pre order

#include"header.h"

void pre_order(tree root)                                                                 
{                                                       
                                                                                
    if (root != NULL) {                                          
                                                                                   
        printf("%d\n",root  -> data);                                        
        
		pre_order(root -> lchild);

		pre_order(root -> rchild);                                           
    }
}                          
