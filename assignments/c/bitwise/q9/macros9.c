#include<stdio.h>

#define max_min(n1, n2) (((n1 - n2) & (1 << 31)) ? (printf("%d is max \
                and %d is min", n2, n1)) :(printf("%d is max,%d is min",n1,n2)));\
				printf("\n")

#define clr_right_setbit(n1) int i; for(i = 0; i <= 31; i++){\
							if((n1 >> i) & 1) {\
					   n1 = ((~((~(~0 << i )) << i)) & n1);\
							break;\
								} \
							} showbits(n1);printf("\n");

#define clr_left_setbit(n2) int j;for(j = ((8 * (sizeof(int)))- 1); j >= 0; j--){\
										if (n2 & (1 << j)){\
										n2 = (n2 & (~(1 << j)));\
										break;\
										}\
									} showbits(n2);printf("\n");

#define set_right_clrbit(num1) int k; for(k =0; k <= ((8* (sizeof(int)))-1); k++){\
											if (((num1 >> k) & 1) == 0){\
											num1 = (num1 | (1 << k));\
											break;\
											}\
										} showbits(num1); printf("\n");

#define set_left_clrbit(num2) int l;for(l =((8 * (sizeof(int)))- 1); l >=0; l--){\
											if(((num2 >> l) & 1) == 0){\
											num2 = num2 | (1 << l);\
											break;\
											}\
									  } showbits(num2); printf("\n");

#define set_stod_bits(num3)  num3 = ((num3 & 0) | ((~((~0) << (d - s +1))) << s));\
							showbits(num3);printf("\n");

#define clr_stod_bits(num4) num4 = ((0 & num4) | (~((~((~0) << (d - s +1))) << s)));\
							showbits(num4);printf("\n");

#define togl_stod_bits(num5) num5 = (num5 ^ ((~((~0) << (d -s + 1))) << s));\
							showbits(num5);printf("\n");


int main()
{
	int n1;
	int n2;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int s;
	int d;
	char c;
	

	printf("enter the number:");
	scanf("%d", &n1);

	printf("enter the number:");
	scanf("%d", &n2);

	printf("enter the number:");
	scanf("%d", &num1);

	printf("enter the number:");
	scanf("%d", &num2);

	printf("enter the number3:");
	scanf("%d", &num3);

	printf("enter the number4:");
	scanf("%d", &num4);

	printf("enter the number5:");
	scanf("%d", &num5);

	printf("enter source and destination position:");
	scanf("%d", &s);
	scanf("%d", &d);

	max_min(n1, n2);
	clr_right_setbit(n1);
	clr_left_setbit(n2);
	set_right_clrbit(num1);
	set_left_clrbit(num2);
	set_stod_bits(num3);
	clr_stod_bits(num4);
	togl_stod_bits(num5);

	c = getchar();

	printf ("%c\n", c);
	return 0;
} 
