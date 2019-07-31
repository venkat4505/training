#include"header.h"
int main()
{
	char *buf1;
	char *buf2;
	int count = 0;

	if(NULL == (buf1 = (char*)malloc(size * sizeof(char)))){                     
        perror("out of memory");                                                
        exit(0);    
	}

	if(NULL == (buf2 = (char*)malloc(size * sizeof(char)))){                     
        perror("out of memory");                                                
        exit(0);                                                            
	} 

	printf("enter the string in buf1:");
	fgets(buf1, size, stdin);

	printf("enter the string in buf2:");
	fgets(buf2, size, stdin);  

	count = strspn( buf1 ,buf2);

	printf("the count is %d\n",count);
	return 0;

}

