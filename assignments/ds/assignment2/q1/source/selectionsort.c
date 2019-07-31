//to sort elements using selection sort                                            
                                                                                
#include"header.h"                                                              
                                                                                
void  selection_sort(int array[MAX])                                               
{                                                                               
    int temp;                                                                   
    int n = size;                                                               
    int i;                                                                      
    int j;
	int min = 0;                                                                      
                                                                                
    for(i = 0; i < (size - 1 ); i++) {                                           
                                                                                
    for(j = i + 1; j < (n) ; j++) {                                              
                                                                                
        if (array[min] > array[j]) { 
			min = j;
		}
	}                                         
            temp = array[min];                                                    
            array[min] = array[i];                                            
            array[i] = temp;  
		min = i + 1;                                                              
    }                                                                           
}                                    
