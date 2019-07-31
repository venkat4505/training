#include"header.h"

int main()
{
	int option;
	int element;
	char num[MAX];
	char num1[MAX];

	max = 3;
	rear = 0;
	front = 0;
	count = 0;

	while(1){
			printf("   main menu\n");
			printf("1.enqueue\n2.dequeue\n3.display\n4.exit:");
			fgets(num, MAX, stdin);
			rem_enter(num);                                                
    		option = isvalid(num); 

	switch(option){

			case 1:
					printf("enter the element to be inserted: ");
					fgets(num1,MAX,stdin);
					rem_enter(num1);
					element = isvalid(num1);
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

			default:
				printf("wrong option\n");
				exit(0);
	}
	}
	return 0;
}		
