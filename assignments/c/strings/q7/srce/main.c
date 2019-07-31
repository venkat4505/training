#include "header.h"
#define size 20 //predefining the size
int main()
{
	char *str1; //declaring string1
	char *str2; //declaring string2
	int a;
	str1 = (char *) malloc(size * sizeof(char));//dynamic memory allocation
	if(str1 == NULL){
		perror("out of memory");
		exit(1);
	}
	str2 = (char *) malloc(size * sizeof(char));//dynamic memory allocation
	if(str2 == NULL){                                                           
        perror("out of memory");                                                
        exit(1);                                                                
    }      

	printf("enter the string1:");
	fgets(str1, size, stdin);  //reading string1 from user

	printf("enter the string2:");
	fgets(str2, size, stdin);  //reading string2 from user

	a = casecmp(str1, str2);//calling the function for comparing strings
	
	if (a == 0)
		printf("strings are equal\n");
	if (a == 1)
		printf("string2 is greater\n");
	if (a == -1)
		printf("string1 is greater\n");
	return 0;
}                       
