//to perform dequeue operation

#include"header.h"

int dequeue()
{
	int element;
	
	if(front > rear){
		printf("queue is empty");
	}

	else{
		front++;
		element = array[front];
	}
	
	return element;
}	
