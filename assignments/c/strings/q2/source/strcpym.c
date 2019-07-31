#include "header.h"                                                             
int main()                                                                      
{                                                                               
    char *sbuf;                                                                 
    char *dbuf;
	int n;  
	char num[MAX];                    
                                                                                
    if(NULL == (sbuf = (char *) malloc(MAX * sizeof(char)))){
	printf("out of memory");
	exit(1);
	}
                                
    if(NULL == (dbuf = (char *) malloc(MAX * sizeof(char)))){                                                          
    printf("out of memory");                                                    
    exit(1);                                                                    
    }                                               
                                                                                
    printf("enter the string:");                                                
    fgets(sbuf, MAX, stdin);

	printf("enter the number of characters to copy:");
	fgets(num, MAX, stdin);
	rem_enter(num);
	n = isvalid(num);                                                     
                                                                                
    strcopy(sbuf, dbuf, n);  
                                                      
    printf("%s\n", dbuf);                                                         
    return 0;                                                                   
}                    
