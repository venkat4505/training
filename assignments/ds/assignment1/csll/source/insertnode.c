//inserting a node for csll

#include"header.h"

csll insert_node(csll head)//called function to insert node
{
	char str1[MAX];
	int option;
	
	printf("--------------------------------------------------------------\n");
	printf("\t1:INSERT AT BEGINING\n");
	printf("\t2:INSERT AT END\n");
	printf("\t3:EXIT\n");
	printf("ENTER THE OPTION:");

	fgets(str1, MAX, stdin);//reading option from user                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation


	switch(option){

	case 1:
		head = insert_begin(head);//to insert at the begining
		break;
	
	case 2:
		head = insert_end(head);//to insert node at end
		break;
	
	case 3:
		exit(0);

	default:
		printf("WRONG OPTIO TRY AGAIN\n");
		//exit(0);
		break;

	}
	return head;
}	
