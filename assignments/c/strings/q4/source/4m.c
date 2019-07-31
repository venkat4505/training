#include "header.h"
int main()
{
	char *str1;
	char *str2;
	
	str1 = (char*) malloc(50 * sizeof (char));
	if (str1 == NULL){ 
	printf("out of memory");                                                    
    exit(1);                                                                    
    }                                                                           	
    str2 = (char*) malloc(50 * sizeof (char));                               
    if (str2 == NULL){
	printf("out of memory");                                                    
    exit(1);                                                                    
    }                     

	printf("enter the string1:");
	fgets(str1, 50 , stdin);

	printf("enter the string2:");
	fgets(str2, 50 , stdin);

	 sappend(str1, str2);

	printf("%s\n", str2);
	
	return 0;
}
