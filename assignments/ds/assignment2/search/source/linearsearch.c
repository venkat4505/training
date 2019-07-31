//to search element using linear search

#include"header.h"

int linear_search()
{
	char str1[MAX];
	char str2[MAX];
	char str3[MAX];
	int i = 0;
	int j = 0;

	int size;
	int array[MAX];
	int num;

	printf("enter the size of array:");
		fgets(str1, MAX, stdin);//read the option                                           
        rem_enter(str1);        //removes enter                                        
        size = isvalid(str1); //atoi validation         

	printf("enter the elements of array:");

	for (j = 0; j <= size ; j++) {

		fgets(str2, MAX, stdin);//read the option                                           
    	rem_enter(str2);        //removes enter                                        
    	array[j] = isvalid(str2); //atoi validation 
	}                  
		 
	printf("enter the number:");

	fgets(str3, MAX, stdin);//read the option                                           
    rem_enter(str3);        //removes enter                                        
    num = isvalid(str3); //atoi validation  

	while (i <= MAX) {
		
		if(num == array[i]) {
			pos = i;
			break;
		}
		i++;
	}
	return pos;
}
