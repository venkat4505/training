#include "header.h"
#define SIZE 20 
int main()
{
	char *str1;
	char *str2;
	//char *res;
	int n;
	str1 = (char *)malloc(sizeof(char) * SIZE);
	if (str1 == NULL){                                                          
    printf("out of memory");                                                    
    exit(1);                                                                    
    }      

	str2 = (char *)malloc(sizeof(char) * (SIZE + SIZE));
	if (str1 == NULL){                                                          
    printf("out of memory");                                                    
    exit(1);                                                                    
    }     
                                                                      
//	res  = (char *)malloc(sizeof(char) * SIZE);
//	if (str1 == NULL){                                                          
  //  printf("out of memory");                                                    
    //exit(1);  
                                                             
    printf("Enter the source string:");
	fgets(str1 , 50 ,stdin);  
	
	printf("Enter the Second string:");
	fgets(str2 , 50 ,stdin);

	printf("Enter the Number of characters :");
	//fgets(n , 50 ,stdin);
	scanf("%d",&n);
	//n = atoi_1(res);
	//if(char_val(str1) == 0 && char_val(str2) == 0)
	//{
		snappend(str1 , str2 , n);		
		//fputs( str2, stdout);
		//printf("\n");
//	}
//	else
//		printf("Invalid Input Plz check Input");
	printf("%s\n",str2);
	return 0;
}
