#include "header.h"                                                             
void palin(char *sbuf)                          
{                                                                               
    int len;
	int i = 0;
	int count = 0;
	int j ;
                                                                    
    len = strlen(sbuf);//finding length of the string	
	printf("length is %d\n",len);

	j = len - 2;

	while(i < (len/2)){

		if((sbuf + i) != (sbuf + j)){
			count++;
			break;
		}
		i++;
		j--;
	}
	
	if(count == 0){
		printf("given string is palindrome\n");
	}
	else
		printf("given string is not palindrome\n");
                                                                         
}            
