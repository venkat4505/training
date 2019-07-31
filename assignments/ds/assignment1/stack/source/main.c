#include"header.h"
int main()
{
	char str1[MAX];
	char str2[MAX];

	int option;//operation to be performed
	int element;//the number to be pushed onto stack

	top = 0;//initializing top of stack to 0
	size = 10;//stack size limit
	
	while(1){//infinite loop for continuous insertion or deletion

	printf("-------------------------MAIN MENU----------------------------\n");
	printf("\t1:PUSH\n");
	printf("\t2:POP\n");
	printf("\t3:DISPLAY\n");
	printf("\t4:EXIT\n");
	printf("ENTER THE OPTION:");

	 if ( NULL == (fgets(str1, MAX, stdin))) {//read the option              
            perror("fgets FAILED");                                             
            exit(0);                                                            
        }                                                                     
    rem_enter(str1);          //remove enter                                      
    option = isvalid(str1); //atoi validation

	switch (option){

		case 1:
				printf("ENTER THE ELEMENT TO BE PUSHED:");
				
				 if ( NULL == (fgets(str2, MAX, stdin))) {//read the element              
            		perror("fgets FAILED");                                             
            		exit(0);                                                            
        		}	                                   
				rem_enter(str2);
				element = isvalid(str2);

				push(element);//push operation called 
				break;
		
		case 2:
				element = pop();//calling pop operation
				printf("THE ELEMENT IS %d\n",element);
				break;

		case 3:				
				display();//calling dispaly operation
				break;

		case 4:exit(0);

		default:
				printf("WRONG OPTION TRY AGAIN\n");
				break;
	}	
	}			
	//return 0;
	main();
}
