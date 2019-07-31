//to sort elements using insertion sort                                            
                                                                                
#include"header.h"                                                              
                                                                                
void  insertion_sort(int array[MAX])                                            
{                                                                               
    int temp;                                                                   
    int n = size;                                                               
    int i;                                                                      
    int j;                                                                      
    int min = 0;                                                                
                                                                                
    for(i = 1; i < (size ); i++) {                                              
                                                                                
    for(j = i - 1; j >= 0 ; j--) {
		temp = array[i];                                                   
                                                                                
        if (temp < array[j]) {
	
			array[j + 1] = array[j];
			array[j] = temp;                                                         
        }
	}                                                                           
	}
}                                     
