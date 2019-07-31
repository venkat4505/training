// to delete a node                                                             
                                                                                
#include"header.h"                                                              
                                                                                
dll delete_node(dll head)                                                       
{                                                                               
    int option;                                                                 
    char str1[MAX];                                                             
                                                                                
    printf("\t1.delete at begin\n");                                            
    printf("\t2.delete at end\n");                                              
    printf("\t3.delete in the middle\n");                                       
    printf("\t4.exit\n");                                                       
    printf("enter the option:");                                               
                                                                                
    fgets(str1, MAX, stdin);//reading option from user                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation                                   
                                                                                
    switch(option) {                                                            
                                                                                
     case 1:                                                                    
        head = delete_begin(head);//to insert at the begining                   
        break;                                                                  
                                                                                
    case 2:                                                                      
        head = delete_end(head);//to insert at the end                          
        break;                                                                  
                                                                                
    case 3:                                                                     
        head = delete_mid(head);//to insert in the middle                       
        break;                                                                  
                                                                                
    case 4:                                                                     
        exit(0);                                                                
                                                                                
    default:                                                                    
        printf("wrong option\n"); 
		exit(0);                                                                
                                                                                
    }                                                                           
    return head;                                                                
}
