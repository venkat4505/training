#include<stdio.h>

void showbits(int num)//showbits definition
{
	int i;//initializing the number of shifts

	for(i=31; i>=0; i--){ //loop runs until i is reaches 0

	if( (i + 1) % 8 == 0){//to provide space between every 8 bits                                                       
   		 printf(" ");  
	}
		((num & (1<<i))? printf("1"): printf("0"));//showing number in  bits
	}
}
