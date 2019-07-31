#include"header.h"                                                              
                                                                                
int main()                                                                      
{                                                                               
                                                                                
    char str1[MAX];                                                             
                                                                                
    int option;//an option to select which operation to be performed            
    head = NULL;//initializing head with null                                   
                                                                                
    while(1){//infinite loop                                                    
                                                                                
    printf("--------------------------------------------------------------\n");
	printf("\t1:INSERT NODE\n");                                                
    printf("\t2:DELETE NODE\n");                                                
    printf("\t3:DISPLAY\n");                                                    
    printf("\t4:EXIT\n");                                                       
    printf("ENTER THE OPTION:");                                              
                                                                                
    fgets(str1, MAX, stdin);//read the option                                           
    rem_enter(str1);        //removes enter                                        
    option = isvalid(str1); //atoi validation                                   
                                                                                
                                                                                
    switch(option){                                                             
                                                                                
    case 1:                                                                     
                                                                                
        head = insert_node(head);//to insert node                               
        break;                                                                  
                                                                                
    case 2:                                                                      
        head = delete_node(head);//to delete node                               
        break;                                                           
                                                                                
    case 3:                                                                     
                                                                                
        display(head);//to display node                                         
        break;

	case 4:                                                                     
        exit(0);//to exit out of the entire program                             
                                                                                
    default:                                                                    
           printf("WRONG OPTION TRY AGAIN\n");        
			break;                                                         
    }                                                                           
    }                                                                           
    return 0;                                                                   
    }                                                                           
                                    
