#include"header.h"

void quick_sort(int arr[], int low, int high)
{
	int res;
	
	if(low < high) {
		res = partition(arr, low, high);
		quick_sort(arr, low, res-1); 
		quick_sort(arr, res+1, high);
	}
} 
		
