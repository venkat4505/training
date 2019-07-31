#include"header.h"

int main()
{
	int arr[SIZE];
	char num[MAX];
	int i;

	printf("ENTER THE ELEMENTS OF ARRAY:");

	for( i = 0; i < SIZE; i++ )
	{
		printf("arr[%d] :  ",i);
		fgets(num,MAX,stdin);
		rem_enter(num);
		arr[i] = isvalid(num);
	}

	quick_sort(arr,0, SIZE-1);	//function call for quick sort

	printf("Sorted array : ");
	
	for(i = 0; i < SIZE ;i++)
		printf("%d\t", arr[i]);
	
	printf("\n");
	

	return 0;
}
