// trees main function

#include"header.h"

int main()                                                                      
{        
	char str1[MAX];                                                                       
    int option;            
	root = NULL;                                                     
                                                                                
    while(1) {                                                                  
        
		printf("----------------------------------------------------------\n");
		printf("\t1.INSERT\n");                                                 
        printf("\t2.PRE ORDER\n");    
		printf("\t3.POST ORDER\n");  
		printf("\t4.IN ORDER\n");   
		printf("\t5.DELETE\n");                                                
        printf("\t6.EXIT\n"); 
        printf("ENTER THE OPTION:"); 
                                           
       if (NULL == (fgets(str1, MAX, stdin))) {//read the option    
			perror("fgets failed");
		}
	   rem_enter(str1);        //removes enter                                        
		option = isvalid(str1); //atoi validation
                                                    
                                                                                
        switch(option) {                                                        
                                                                                
        case 1:                                                                 
            root = insert_node(root);                                           
            break;                                                              
                                                                                
        case 2:                                                                 
            pre_order(root);                                                          
            break; 

		case 3:
			post_order(root);
			break;

		case 4:
			in_order(root);
			break;

		case 5:
			delete_sichild(root);
			break;                                                             
                                                                                
        case 6:                                                                 
            exit(0); 

		default:
			printf("\t***wrong option...try again****\n");
			//main();
			break;
		}                                                                       
                                                                                
    }                                                                           
    return 0;                                                                   
}                           
