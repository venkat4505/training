#include<stdio.h>

union sample
{
	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
}; 

int main()
{
	union sample u;
	u.e = 20;
	
	printf("a is %d\n",u.a);
	printf("b is %d\n",u.b);
	printf("c is %d\n",u.c);
	printf("d is %d\n",u.d);
	printf("e is %d",u.e);
}
