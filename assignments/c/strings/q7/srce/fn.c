#include<stdio.h>
int casecmp(char *str1, char *str2)//function definition
{
	int count = 0;//intializing count to zero
	char ch;
	char ch1;

	while(*str1 != '\0'){ //running the loop until it encounters null character
		ch = *str1;
		ch1 = *str2;

		if (ch >= 97 && ch <= 122){ //converting str1 to upper case
		*str1 = (ch - 32);
		}
		if ( ch1 >= 97 && ch1 <= 122){ //converting str2 to upper case
			*str2 = (ch1 - 32);
		}
		
		if(*str1++ != *str2++){ 
			count++;
		}
	}
	
	if(count == 0){
		return 0;
	}
	else if(*(str1-1) <  *(str2 - 1)){ 
		return 1;
	}

	else{
		return -1;
	}
}
