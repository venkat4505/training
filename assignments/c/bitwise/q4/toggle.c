//To toggle even bits and odd bits respectively in a given number

#include<stdio.h>

int even_bits_toggle(int num);

int odd_bits_toggle(int num);

int main()
{
	int num;	//number in which toggling is to be done
	
	printf("enter the number");
	scanf("%d", &num);

	even_bits_toggle(num); //calling function to toggle even bits
	odd_bits_toggle(num); //calling function to toggle odd bits

	return 0;
}

int even_bits_toggle(int num) //function to toggle even bits
{
	int i;

	for(i = 0; i <= 31; i = i + 2){
		num = (num ^ (1 << i));
	}
	
	showbits(num);
	printf("\n");
}

int odd_bits_toggle(int num) //function to toggle odd bits
{
	int i;

	for(i = 1; i <= 31; i = i + 2){
		num = (num ^ (1 << i));
	}

	showbits(num);
	printf("\n");
}
