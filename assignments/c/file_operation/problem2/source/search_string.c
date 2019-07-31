#include"header.h"

int search_string(char *str)
{
	int i = 0;//iteration
	int line_no = 1;//count line
	int offset;
	char ch;
	FILE *fp;//file pointer

	if(NULL == (fp = fopen("abc.txt", "r"))) {//open file
		perror("fopen failed\n");
		exit(1);
	}

	while((ch = fgetc(fp)) != EOF) {
		if(ch == 10) {
			line_no++;
			offset = ftell(fp);
		}

		if(ch == str[i]) {
			i++;
			while(str[i] != '\n') {
				if((ch = fgetc(fp)) == str[i]){
					i++;
				} else {
					i = 0;
					break;
				}
			}
		}
		if(str[i] == '\n') {

			if((fseek(fp, offset, SEEK_SET)) == -1) {
				perror("fseek failed\n");
			}

			while((ch = fgetc(fp)) != '\n') {
				printf("%c",ch);
			}

			printf("\n");
			return line_no;
			break;
		}
	}
	return 0;
}
