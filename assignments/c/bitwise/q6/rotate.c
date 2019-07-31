//Functions to rotate left and right

#include<stdio.h>
unsigned int left_rotate_bits(unsigned int num);
unsigned int right_rotate_bits(unsigned int num);
unsigned int left_rotate_n_bits(unsigned int num, int n);
unsigned int right_rotate_n_bits(unsigned int num, int n);

int main()
{

	unsigned int num;
	int left_rotate;
	int right_rotate;
	int left_rotate_n;
	int right_rotate_n;
	int n;

	printf("enter the number of bits:");
	scanf("%d",&n);

	printf("enter the number:");
	scanf("%d",&num);
	
	left_rotate = left_rotate_bits(num);
	showbits(left_rotate);
	printf("\n");

	right_rotate = right_rotate_bits(num);
	showbits(right_rotate);
	printf("\n");

	left_rotate_n = left_rotate_n_bits(num, n);
	showbits(left_rotate_n_bits);
	printf("\n");

	right_rotate_n = right_rotate_n_bits(num, n);
	showbits(right_rotate_n_bits);
	printf("\n");
	return 0;
}

unsigned int left_rotate_bits(unsigned int num)
{
	(num & (1 << 31)) ? (num = ((num << 1) | 1)) : (( num = num << 1));
	return num;
}

unsigned int right_rotate_bits(unsigned int num)
{
	(num & 1) ? (num = ((num >> 1) | (1 << 31))) : ((num = num >> 1));
	return num;
}

unsigned int left_rotate_n_bits(unsigned int num, int n)
{
	num = (((num >> (31 - n)) & (~ 0)) | (num << n));/*get bits and do OR with num shifted by ntimes*/
	return num;
}
	
unsigned int right_rotate_n_bits(unsigned int num, int n)
{
	num = ((num & (~0 >> (31 - n))) | (num >> n));
	return num;
}
