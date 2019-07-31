//worst case : O(nlogn)
//best case : O(nlogn)
#include"header.h"

int main()
{
	/* declaration of array*/
	int arr[SIZE];
	
	/* number of elements to be entered into the array*/
	char num[MAX];
	int n;
	int i;//index
	
	printf("%d",getpid());
	
	/* enter the number of elements in an array*/
	printf("enter the number of elements in an array:\n");
	if(NULL == (fgets(num, MAX, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	rem_enter(num);
	n = isvalid(num);

	/*enter the elements in an array*/
	printf("enter the elements in an array:\n");

	for( i = 0; i < n; i++ )
	{
		printf("arr[%d] :  ",i);
		if(NULL == (fgets(num, MAX, stdin))) {
			perror("fgets failed\n");
			exit(ONE);
		}
		rem_enter(num);
		arr[i] = isvalid(num);
	}

	merge_sort( arr,0, n - 1);	//function call for merge sort

	printf("Sorted array : ");
	for(i = 0; i < n ;i++)
		printf("%d\t", arr[i]);
	
	printf("\n");
	
	
	return 0;
}
