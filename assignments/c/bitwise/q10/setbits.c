#include<stdio.h>

int setbits(int x,int p,int n,int y);
int main()
{
	int y;
	int p;
	int n;
	int x;

	printf("enter the number, position and number of bits");
	scanf("%d",&y);
	scanf("%d",&p);
	scanf("%d",&n);
	
	setbits(x,p,n,y);
	return 0;
}

int setbits(int x,int p,int n,int y)
{
	x = (y |(~(~ 0 << n)) << (p - (n - 1)));
	showbits(x);
	printf("\n");
}	
