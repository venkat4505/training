#include"header.h"

int partition(int arr[], int low, int high)
{
	int pos = low;
	int temp;
	int i = low + 1;
	int j = high;
	
	while(i <= j) {
		while(arr[i] < arr[pos]) {
			i++;
		}
		while((arr[j] > arr[pos])) {
			j--;
		}
		
		if(i < j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	temp = arr[pos];
	arr[pos] = arr[j];
	arr[j] = temp;

	return j;
}
