#include<stdio.h>

#define getbits(x,p,n) (x =((x >> p) & (~(~ 0 << n))))

int main()
{
	int x;
	int p;
	int n;
	
	printf("enter the number:");
	scanf("%d",&x);

	printf("enter the position:");
	scanf("%d", &p);

	printf("enter the number of bits:");
	scanf("%d", &n);
	
	getbits(x,p,n);
	showbits(x);
	printf("\n");
	return 0;
}
