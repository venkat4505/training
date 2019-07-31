#include<stdio.h>

int cnt_leading_set_bits(int num);
int cnt_leading_clear_bits(int num);
int cnt_trailing_set_bits(int num);
int cnt_trailing_clear_bits(int num);
int main()
{
	int num;

	printf("enter the number:");
	scanf("%d",&num);
	
	cnt_leading_set_bits(num);
	cnt_leading_clear_bits(num);
	cnt_trailing_set_bits(num);
	cnt_trailing_clear_bits(num);

	return 0;
}

int cnt_leading_set_bits(int num)
{
	int i;
	int count = 0;

	for(i = 31; i >= 0; i--){
		if((num >> i) & 1)
			count++;
		else
			break;
	}
	
	printf("%d\n", count);
}

int cnt_leading_clear_bits(int num)                                               
{                                                                               
    int i;                                                                      
    int count = 0;                                                              
                                                                                
    for(i = 31; i >= 0; i--){                                                   
        if(((num >> i) & 1) == 0)                                                      
            count++;                                                            
        else                                                                    
            break;                                                              
    }                                                                           
                                                                                
    printf("%d\n", count);                                                      
}

int cnt_trailing_set_bits(int num)                                               
{                                                                               
    int i;                                                                      
    int count = 0;                                                              
                                                                                
    for(i = 0; i <= 31; i++){                                                   
        if((num >> i) & 1)                                                      
            count++;                                                            
        else                                                                    
            break;                                                              
    }                                                                           
                                                                                
    printf("%d\n", count);                                                      
}                          

int cnt_trailing_clear_bits(int num)                                              
{                                                                               
    int i;                                                                      
    int count = 0;                                                              
                                                                                
    for(i = 0; i <= 31; i++){                                                   
        if(((num >> i) & 1) == 0)                                                     
            count++;                                                            
        else                                                                    
            break;                                                              
    }                                                                           
                                                                                
    printf("%d\n", count);                                                      
}                                         
