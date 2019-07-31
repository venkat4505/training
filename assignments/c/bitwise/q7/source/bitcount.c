// function to count the number of bits set and number of clear bits

#include<stdio.h>
#define MAX 100

int count_bit_set(int num);//to count number of set bits 
int count_bit_clear(int num);//to count number of clear bits

int main()
{
	char str1[MAX];
	int num;//number 

	printf("enter the number:");
	fgets(str1, MAX, stdin);//read the number from stdin                                          
    rem_enter(str1);        //removes enter                                        
    num = isvalid(str1); //atoi validation                  

	count_bit_set( num);//set bit function call
	count_bit_clear(num);//clear bit function call

	return 0;
}

int count_bit_set(int num)//set bit function 
{
	int i;//to shift bits
	int count = 0;//to count number of set bits
	
	for(i = 0; i <= 31; i++){
		if((num >> i) & 1)//right shifts number and perform masking 
			count++;//increments count equals to 1
	}
	printf("%d\n", count);//prints the count
}

int count_bit_clear(int num)//clear bit function
{
	int i;//to shift bits
	int count = 0;//to count number of set bits
	
	for(i = 0; i <= 31; i++){
		if(((num >> i) & 1) == 0)//right shift and masking comparing with 0
			count++;//increments count if equals to zero
}
	printf("%d\n",count);//prints the count
}
