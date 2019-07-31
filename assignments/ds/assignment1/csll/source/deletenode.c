//to delete node for csll

#include"header.h"                                                              
                                                                                
csll delete_node(csll head)//called function to delete node                     
{                                                                               
    char str1[MAX];                                                             
    int option;                                                                 
                                                                                
    printf("--------------------------------------------------------------\n"); 
    printf("\t1:DELETE AT BEGINING\n");                                         
    printf("\t2:DELETE AT END\n");                                                 
    printf("\t3:EXIT\n");                                                       
    printf("ENTER THE OPTION:");                                     
                                                                                
    fgets(str1, MAX, stdin);//reading option from user                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation                                   
                                                                                
                                                                                
    switch(option){                                                             
                                                                                
    case 1:                                                                     
        head = delete_begin(head);//to insert at the begining                   
        break;                                                                  
                                                                                
/*    case 2:                                                                     
        head = delete_end(head);//to insert node at end                         
        break;*/                                                               
                                                                                
    case 3:                                                                     
        exit(0);                                                                
                                                                                
    default:                                                                    
        printf("WRONG OPTION TRY AGAIN\n");                                      
        //exit(0);                                                              
        break;
	}

	return head;
}                                                                  
                             
