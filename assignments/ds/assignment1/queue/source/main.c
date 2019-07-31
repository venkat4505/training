//to perform queue operations

#include"header.h"

int main()
{
	int option;
	int element;
	max = 10;
	rear = -1;
	front = -1;
	
	while(1){
			printf("   main menu\n");
			printf("enter 1 for enqueue\nenter 2 for dequeue\nenter 3 for display\nenter 4 to exit:");
			scanf("%d",&option);

	switch(option){

			case 1:
					printf("enter the element to be inserted: ");
					scanf("%d",&element);
					enqueue(element);
					break;

			case 2:
					element = dequeue();
					printf("the element is %d\n",element);
					break;
			case 3:
					display();
					break;
			case 4:
					exit (0);
	}
	}
	return 0;
}		
