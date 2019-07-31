//to perform push operation

#include"header.h"
void push(int element)
{
	if (top >= size) {
		printf("STACK IS FULL");
	}

	else {
		stack[top] = element;
		top++;
	}

}
