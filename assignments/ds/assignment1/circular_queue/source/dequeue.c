//to perform dequeue operation

#include"header.h"

int dequeue()
{
	int element;
	 if (count == 0){                                                      
        printf("queue is empty\n");                                                
    }                                                                           
                                                                                
    else{                                                                       
        element = array[front]; 
		printf("%d",element);                                                 
                                                                                
        if (front == max - 1){                                                   
            front = -1;                                                           
        }                                                                       
        front++;                                                                 
        count--;                                                                
		 return element;
	}
	return;
}                               
