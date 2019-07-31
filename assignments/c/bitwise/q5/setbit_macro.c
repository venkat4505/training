//Macro to test and set a bit
#include<stdio.h>

#define bit_ts(num, pos) ((num & (1 << pos)) ? showbits (num) : (num = (num |\
                         (1 << pos))))
int main()
{
	int num;
	int pos;
	
	printf("enter the number:");
	scanf("%d", &num);

	printf("enter the position:"); 
	scanf("%d", &pos);

	bit_ts(num , pos);
	showbits(num);
	return 0;
}
