//to search elements in a list

#include"header.h"

int main()
{
	char str1[MAX];
	int option;
	
	printf("enter option\n");
	printf("\t1.linear search\n");
	printf("\t2.binary search\n");

	fgets(str1, MAX, stdin);//read the option                                           
    rem_enter(str1);        //removes enter                                        
    option = isvalid(str1); //atoi validation

	
	switch (option) {

		case 1:
			pos = linear_search();
			break;

		case 2:
			pos = binary_search();
			break;

		case 3:
			exit (0);

		default:
			printf("wrong option");
			exit(0);
	}
	printf("the position of the number is %d\n",pos);
	return 0;
} 
