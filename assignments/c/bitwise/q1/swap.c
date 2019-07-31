//to swap the bit of a number

#include<stdio.h>

int main()
{
	int num ;//given number
	int s_pos;//position of bit
	int d_pos;//position of bit
	int a;//to store the bit at source position
	int b;//to store the bit at destination position
	
	printf("ENTER THE NUMBER:");//number in which swapping needs to be done
	scanf("%d",&num);

	printf("ENTER THE SOURCE POSITION:");//source position
	scanf("%d",&s_pos);

	printf("ENTER THE DESTINATION POSITION:");//destination position
	scanf("%d",&d_pos);\

	((( num >> s_pos) & 1) ? (a = 1) : (a = 0) );//to find the bit at s_pos
	((( num >> d_pos) & 1) ? (b = 1) : (b = 0) );//to find the bit at d_pos
	num = num & ( ~ (1 << s_pos));//to reset value at s_pos
	num = num & ( ~ (1 << d_pos));//to reset value at d_pos
	num = num | (a << d_pos);//swapping the bits
	num = num | (b << s_pos);//swapping the bits

	showbits(num);

	return 0;
}
