//To copy bits bits from source to destination

#include<stdio.h>

int main()
{
	int snum;	//source number
	int dnum;	//destination number
	int s_pos;	//source position
	int d_pos;	//destination position
	int n;	    //number of bits needs to copied

	printf("enter source number:");
	scanf("%d",&snum);

	printf("enter destination number:");
	scanf("%d",&dnum);

	printf("enter source position:");
	scanf("%d", &s_pos);

	printf("enter destination position:");
	scanf("%d", &d_pos);

	printf("enter numberof bits:");
	scanf("%d",&n);

	snum = (snum >> ((s_pos) - (n - 1))) & (~(~ 0 << n));

	dnum = dnum & ((~((~(~ 0 << n)) << ((d_pos) - (n - 1)))));
	
	dnum = dnum | (snum << (d_pos - (n - 1)));

	showbits(dnum);
	return 0;
}
