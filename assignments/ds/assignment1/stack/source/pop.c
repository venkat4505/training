//to perform pop operation

#include"header.h"
int pop()
{
	int element;
	if (top < 0){
		printf("stack is empty");
	}

	else{
		top--;
		element = stack[top];
	}
		return element;
}
