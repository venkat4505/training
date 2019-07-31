#include"header.h"

int count_words(char *filename)
{
	int count = 0;//count words
	char ch;
	FILE *fp;//file pointer

	if ( NULL == (fp = fopen(filename, "r"))) {
		perror("fopen failed\n");
		exit(1);
	}
	
	while((ch = fgetc(fp)) != EOF) {//check and increment count

		if(ch == ' ' || ch == '\t' || ch == '\n') {
			count++;
		}
	}
		return count;
}
