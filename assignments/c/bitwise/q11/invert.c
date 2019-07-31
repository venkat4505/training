#include<stdio.h>

int invert(int num,int n,int p);
int main()
{

	int n;
	int p;
	int num;

	printf("enter the values of num ,n and p");
	scanf("%d", &num);
	scanf("%d", &n);
	scanf("%d", &p);

	invert(num, n, p);
	return 0;
}

int invert(int num,int n,int p)
{
	num = (num ^ (~(~ 0 << n)) << (p - (n - 1)));
	showbits(num);
}
