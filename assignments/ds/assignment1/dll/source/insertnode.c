// to insert a node 

#include"header.h"

dll insert_node(dll head)
{
	int option;
	char str1[MAX];

	printf("\t1:INSERT AT BEGIN\n");
	printf("\t2:INSERT AT END\n");
	printf("\t3:INSERT IN THE MIDDLE\n");
	printf("\t4:INSERT AT THE GIVEN POSITION\n");
	printf("\t5:EXIT\n");
	printf("ENTER THE OPTION:");

	fgets(str1, MAX, stdin);//reading option from user                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation  

	switch(option) {

	 case 1:                                                                     
        head = insert_begin(head);//to insert at the begining                   
        break;                                                                  
                                                                                
    case 2:                                                                     
        head = insert_end(head);//to insert at the end                          
        break;

	case 3:
		head = insert_mid(head);//to insert in the middle
		break;

	case 4:
		head = insert_gpos(head);//to insert at given position
		break;

	case 5:                                                                    
        exit(0);                                                                
                                                                                
    default:                                                                    
        printf("WRONG OPTION TRY AGAIN\n");                                               
        main();                                             
                                                                                
    }                                                                           
    return head;                                                                
}                                                                                                                                               
