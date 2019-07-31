//to delete a node                                                              
                                                                                
#include"header.h"                                                              
                                                                                
sll delete_node(sll head)//called function to delete a node                       
{
	char str1[MAX];                                                             
    int option;                                                                 
                                                                                                                   
    printf("\t1.delete at begining\n");                                         
	printf("\t2.delete at the end\n");                                          
    printf("\t3.delete at the given position\n");                               
    printf("\t4.delete before the given position\n");                           
    printf("\t5.delete after the given position\n");                            
    printf("\t6.delete before the given number\n");                             
    printf("\t7.delete after the given number\n");                              
    printf("\t8.delete at the middle\n");                                       
    printf("\t9.delete at the penultinate node\n");
	printf("enter the option:");                             
                                                                                
    fgets(str1, MAX, stdin);//reading option from user                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation                                   
                                                                                
                                                                                
    switch(option){                                                             
                                                                                
    case 1:                                                                     
        head = delete_begin(head);//to delete at the begining                   
        break;                                                                  
                                                                                
    case 2:                                                                     
        head = delete_end(head);//to delete at the end                          
        break;                                                                  
                                                                                
    case 3:                                                                     
        head = delete_gpos(head);//to delete at the given position              
        break;                                                                  

	case 4:                                                                     
        head = delete_bpos(head);//to delete before given position              
        break;                                                                  
                                                                                
    case 5:                                                                     
        head = delete_apos(head);//to delete after the given position           
        break;                                                                  
                                                                                
    case 6:                                                                     
        head = delete_bnum(head);//to delete before given number                
        break;                                                                  
                                                                                
    case 7:                                                                     
        head = delete_anum(head);//to delete after given number                 
        break;                                                                  
                                                                                
    case 8:                                                                     
        head = delete_mid(head);//to delete in the middle                       
        break;                                                                  
                                                                                
    case 9:                                                                     
        head = delete_pun(head);//to delete at penultinate node                 
        break;                                                               
                                                                                
    case 10:                                                                    
        exit(0);                                                               
                                                                                
    default:

        printf("wrong option\n");                                               
        exit(0);                                                                
                                                                                
    }                                                                           
    return head;
}                                            
