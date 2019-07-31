#include"header.h"

int main(int argc , char *argv[])
{
	int i;	
	printf("Number of file in the folder is %d\n",argc-1);//print number of files
        
	for(i = 1; i < argc ; i++) {
	printf("%s\n", argv[i]);
	}
		
	return 0;
}

