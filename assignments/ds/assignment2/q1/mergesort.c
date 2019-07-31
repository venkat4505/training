//sorting the elemnts using merge sort

#include<stdio.h>
#include<stdlib.h>
#define MAX 100     

int main()
{
	char str3[MAX];                                                             
    char str2[MAX];   
	
	int array[MAX];                                                                
    int size; 

	

	 printf("enter the size of array:");                                         
        fgets(str2, MAX, stdin);//read the option                                           
        rem_enter(str2);        //removes enter                                        
        size = isvalid(str2); //atoi validation                                 
                                                                                
    printf("enter the elements of array:");                                     
                                                                                
    for (i = 0; i <= (size - 1) ; i++) {                                        
                                                                                
        fgets(str3, MAX, stdin);//read the option                                           
        rem_enter(str3);        //removes enter                                        
        array[i] = isvalid(str3); //atoi validation                             
    } 

                                                        
