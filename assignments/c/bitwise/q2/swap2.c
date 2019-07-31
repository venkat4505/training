//To swap bits between numbers

#include<stdio.h>

int main()
{
	int snum;	//source number
	int dnum;	//destination number
	int spos;	//source position
	int dpos;	//destination position
	int s_bit;	//source bit
	int d_bit;	//destination bit

	printf("enter the source number:");
	scanf("%d",&snum);

	printf("enter the destination number:");
	scanf("%d",&dnum);

	printf("enter source position:");
	scanf("%d",&spos);

	printf("enter destination position:");
	scanf("%d",&dpos);

	(((snum >> spos) & 1) ? (s_bit = 1 ) : (s_bit = 0));/*to store bit at 
														 source position*/					
	(((dnum >> dpos) & 1) ? (d_bit = 1) : (d_bit = 0));/*to store bit at  
													    destination position*/
	snum = snum & (~ ( 1 << spos));						
	dnum = dnum & (~ ( 1 << dpos));

	snum = snum | ( d_bit << spos);
	dnum = dnum | ( s_bit << dpos);
	
	showbits(snum);
	printf("\n");
	showbits(dnum);
	printf("\n");

	return 0;
}
