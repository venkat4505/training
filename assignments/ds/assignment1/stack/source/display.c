//to display stack

#include"header.h"
void display()
{
	int i;

	printf("--------------------------------------------------------------\n");
	printf("THE ELEMENTS IN THE STACK ARE :");

	for (i = 0; i <= (size - 1); i++){
		printf("%d\t", stack[i]);
	}
	printf("\n--------------------------------------------------------------\n");
}

