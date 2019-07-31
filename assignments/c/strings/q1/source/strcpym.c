//to copy a string

#include "header.h"
int main()
{
	char *sbuf;//source string
	char *dbuf;//destination string
//	char num[MAX];
//	int SIZE;
//	char num[MAX];

	if (NULL ==	(sbuf = (char *) malloc(MAX * sizeof(char)))){//dynamic memory allocation
		perror("out of memory");
		exit(0);
	}

	if (NULL == (dbuf = (char *) malloc(MAX * sizeof(char)))){//dynamic memory allocation
		perror("out of memory");
		exit(0);
	}

	printf("enter the string:");
	fgets(sbuf, MAX, stdin);

	strcopy(sbuf, dbuf);//calling copy function
	printf("%s", dbuf);
	return 0;
}
