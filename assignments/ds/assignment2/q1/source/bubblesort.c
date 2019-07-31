//to sort elements using bubble sort

#include"header.h"

void  bubble_sort(int array[MAX])
{
	int temp;
	int n = size;
	int i;
	int j;

	for(i = 0; i < (size - 1); i++) {

	for(j = 0; j < (n - 1); j++) {

		if (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
		}
	}
		n--;
	}
}		
