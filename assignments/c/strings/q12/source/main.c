#include"header.h"
int main()
{
	char *str;
	char *temp;

	if(NULL == (str = (char*)malloc(size * sizeof(char)))){
		perror("out of memory");
		exit(0);
	}

	if(NULL == (temp = (char*)malloc(size * sizeof(char)))){                      
        perror("out of memory");                                                
        exit(0);                                                                
    }

	printf("enter the string:");
	fgets(str, size, stdin);               

	squeeze(str, temp);

	printf("the string obtained after squeeze is %s", temp);

	return 0;
}
