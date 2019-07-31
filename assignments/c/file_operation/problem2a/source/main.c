#include"header.h"
int main(int argc , char *argv[])
{
	FILE *fp;//file pointer
	char *str;//char pointer
	char *word;//buffer
	int line = 0;//count lines
	int i = 0;//iteration
	int j = 0;//iteration

	str = (char*)malloc(sizeof(char)*100);//allocate memory
	word = (char*)malloc(sizeof(char)*100);//allocate memory

	if(NULL == (fp = fopen("p.c","r"))){//open file
		printf("not opened\n");
		exit(0);
	}

	while( fgets(str,100,fp) != NULL){//get full line from file
		*(str+strlen(str)-1) = '\0';
		line++;
		while(*(str+i) != '\0'){//store the word in buffer
			while((*(str+i) != ' ') && (*(str+i) != ',') && (*(str+i) != '.')&& (*(str+i))){
				*(word+j) = *(str+i);
				j++;
				i++;
	}
	*(word+j) = '\0';
//	printf("%s\n",word);
	if(strcmp(word,argv[1]) == 0)//compare the word
		printf("present %s\n line no =%d",str,line);
	j = 0;
	i++;
	}
	i = 0;
	}
	fclose(fp);

}

