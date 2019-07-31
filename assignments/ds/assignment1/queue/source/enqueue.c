//to perform enqueue operation

#include"header.h"

void enqueue(int element)
{
	if (rear > max){
		printf("queue is full");
	}

	else{
		rear++;
		array[rear] = element;
	}
}

