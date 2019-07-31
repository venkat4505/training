#include"header.h"

int main(int argc, char *argv[])
{
	char str[100];
	int num;

	printf("file is:%s\n",argv[1]);
	printf("Enter string to search : ");//enter string to be searched
	fgets(str, 100, stdin);
	
	num = search_string(str);
				
	if(num == 0) {//found or not
		printf("String not found\n");
	} else {
		printf("string found.!!!\nLine no is : %d\n", num);
	}
	
	return 0;
}

