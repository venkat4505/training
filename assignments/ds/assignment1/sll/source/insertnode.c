//inserting a node

#include"header.h"

sll insert_node(sll head)//called function to insert node
{
	char str1[MAX];
	int option;

	printf("--------------------------------------------------------------\n");
	printf("\t1:INSERT AT BEGINING\n");
	printf("\t2:INSERT AT END\n");
	printf("\t3:INSERT AT GIVEN POSITION\n");
	printf("\t4:INSERT BEFORE THE GIVEN POSITION\n");
	printf("\t5:INSERT AFTER THE GIVEN POSITION\n");
	printf("\t6:INSERT BEFORE THE GIVEN NUMBER\n");
	printf("\t7:INSERT AFTER THE GIVEN NUMBER\n");
	printf("\t8:INSERT AT THE MIDDLE\n");
	printf("\t9:INSERT AT THE PENULTINATE NODE\n");
	printf("\t10.INSERT IN INCREASING ORDER\n");
	printf("\t11:EXIT\n");
	printf("ENTER THE OPTION:");

	if (NULL == (fgets(str1, MAX, stdin))) {//reading option from user
		perror("fgets FAILED");
		exit(1);
	}	                                           
    rem_enter(str1);         //removes enter                                       
    option = isvalid(str1); //atoi validation


	switch(option){

	case 1:
		head = insert_begin(head);//to insert at the begining
		break;

	case 2:
		head = insert_end(head);//to insert at the end
		break;

	case 3:
		head = insert_gpos(head);//to insert at the given position
		break;

	case 4:
		head = insert_bpos(head);//to insert before given position
		break;
	
	case 5:
		head = insert_apos(head);//to insert after the given position
		break;

	case 6:
		head = insert_bnum(head);//to insert before given number
		break;

	case 7:
		head = insert_anum(head);//to insert after given number
		break;
	
	case 8:
		head = insert_mid(head);//to insert in the middle
		break;

	case 9:
		head = insert_pun(head);//to insert at penultinate node
		break;

	case 10:
		head = insert_increasing(head);
		break;
			
	case 11:
		exit(0);

	default:
		printf("WRONG OPTION TRY AGAIN\n");
		//exit(0);
		break;

	}
	return head;
}	
