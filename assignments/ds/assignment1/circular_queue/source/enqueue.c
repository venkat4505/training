//to perform enqueue operation

#include"header.h"

void enqueue(int element)
{
	if (count == max){
		printf("queue is full\n");
	}
	
	else{
		/*printf("enter the element to be inserted: ");               
                    fgets(num1,MAX,stdin);                                      
                    rem_enter(num1);                                            
                    element = isvalid(num1);*/
		array[rear] = element;

		if (rear == max - 1){
			rear = -1;
		}
		rear++;
		count++;
	} 
}
