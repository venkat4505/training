#include"header.h"

void merge_sort(int arr[], int low, int high)
{
	int mid;	//mid position of array

	if(low < high) {
		
		mid = (low+high)/2;

		/*recurrsive call for merge_sort*/		
		merge_sort(arr, low, mid);
		merge_sort(arr, mid+1, high);

		/*sorting and conquering the elements*/
		merging(arr, low, mid, high);
	}
}
