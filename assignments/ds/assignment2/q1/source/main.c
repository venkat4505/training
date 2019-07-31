//to sort elements in a list

#include"header.h"

int main()
{
	char str1[MAX];
	char str2[MAX];
	char str3[MAX];

	int option;//to select which type of sorting
	int array[MAX];//array of elements to be sorted

	int i = 0;

	printf("----------------------MAIN MENU-------------------------------\n");	
	printf("--------------------------------------------------------------\n");
	printf("\t1:BUBBLE SORT\n");
	printf("\t2:SELECTION SORT\n");
	printf("\t3:INSERTION SORT\n");
	printf("\t5:EXIT\n");
	printf("ENTER OPTION:");

		if ( NULL == (fgets(str1, MAX, stdin))) {//read the option 
			perror("fgets FAILED");
			exit(0);
		}                                          
    	rem_enter(str1);        //removes enter                                        
    	option = isvalid(str1); //atoi validation

	printf("ENTER THE SIZE OF THE ARRAY:");
		 if ( NULL == (fgets(str2, MAX, stdin))) {//read the size of array              
            perror("fgets FAILED");                                             
            exit(0);                                                            
        }                                                              
        rem_enter(str2);        //removes enter                                        
        size = isvalid(str2); //atoi validation         

	printf("ENTER THE ELEMENTS OF THE ARRAY:");

	for (i = 0; i <= (size - 1) ; i++) {

		 if ( NULL == (fgets(str3, MAX, stdin))) {//read the elements            
            perror("fgets FAILED");                                             
            exit(0);                                                            
        }                                                                     
    	rem_enter(str3);        //removes enter                                        
    	array[i] = isvalid(str3); //atoi validation 
	}                  

	
	switch (option) {

		case 1:
			bubble_sort(array);//sorting elements using bubble sort
			break;

		case 2:
			selection_sort(array);//sorting elements using selection sort
			break;

		case 3:
			insertion_sort(array);//sorting elements using insertion sort 
			break;

/*		case 4:
			merge_sort(array);//sorting elements using insertion sort  
			break;*/

		case 5:
			exit(0);

		default:
			printf("WRONG OPTION TRY AGAIN");
			//exit(0);
			break;
	}

	printf("--------------------------------------------------------------\n");
	printf("THE ELEMENTS AFTER SORTING ARE:\t");
	for(i = 0; i < size; i++) {//dispalys elements after sorting
		printf("%d\t",array[i]);
	}
	printf("\n------------------------------------------------------------\n");
//	printf("\n");
//	return 0;
	main();
}
