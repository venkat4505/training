#include "header.h"
char *sappend(char *str1, char *str2)
{      
	while (*str2++){
	}
	str2--;
	str2--;
	while (*str1){
	*str2 = *str1;
	*str1++;
	*str2++;
	}

	*str2 = '\0';
//	printf("%s\n", str2);       
//	return str2;
}
