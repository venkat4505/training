#include"header.h"

char str_upr(char *str)
{
	int i = 0;

	while(*(str + i) != '\0'){
		(*(str + i) >= 65 && *(str + i) <= 90) ? *(str + i) = (*(str + i) +32) : *(str + i);			
		i++;
	}
}	
