#include "header.h"                                                             
int main()                                                                      
{                                                                               
    char *sbuf;                                                                 
                                                                                
    sbuf = (char *)malloc(sizeof(char) * size);                                                                  
                                                                                
    printf("Enter the source string:");                                         
    fgets(sbuf , size ,stdin);                                                  
    printf("%s\n", sbuf);
                                                      
    palin(sbuf);           

/*	if (a == 1)
	printf("given string is palindrome\n");

	else
	printf("given string is not palindrome\n"); */                                                 
    return 0;                                                                   
}                
