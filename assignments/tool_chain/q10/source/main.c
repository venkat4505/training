#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char *sbuf1 = NULL;
	char *sbuf2	= NULL;
	char *sbuf3 = NULL;	
	long int res = 0;
	long int c;
	long int a;
	long int b;
	char ch;

	if (NULL == (sbuf1 = (char *)malloc(sizeof(char) * 100))) {
		perror("malloc failed\n"); 
		exit(0);
	}

	 if (NULL == (sbuf2 = (char *)malloc(sizeof(char) * 100))) {                   
          perror("malloc failed\n");                                              
          exit(0);                                                                
      }          

	 if (NULL == (sbuf3 = (char *)malloc(sizeof(char) * 100))) {                   
          perror("malloc failed\n");                                              
          exit(0);                                                                
     } 
         
	if (NULL == (fp = fopen ("/proc/4174/maps","r"))) {
		perror("fopen failed\n");
		exit(0);
	}

	while((ch = fgetc (fp)) != EOF) {  //running loop until end of file reaches 
		printf("%c",ch);
	}
	rewind (fp);

	while((ch = fgetc (fp)) != EOF) {//running loop until end of file reaches

		fseek(fp,-1,SEEK_CUR);

		int i = 0;
		while((ch = fgetc(fp)) != '-') { //reading starting address of segment  
			*(sbuf1 + i) = ch;
			i++;
		}
//		a = my_atoi(sbuf1);
		printf("%s-",sbuf1);

		int j = 0;
		while((ch = fgetc(fp)) != ' ') {//reading the ending address of segment
			*(sbuf2 + j ) = ch;
			j++;
		}
//		b = my_atoi(sbuf2);	
		printf("%s\t",sbuf2);    

		c = b - a;//difference between the staring and ending address of segemnet
	
	printf("%p\n",c);
	res = res + c;//sum of all segements space

		while((ch = fgetc(fp)) != '\n') {//to reach new line to read new address
		}
	}
	
	printf("%d\n",res);

	return 0;
}

	

