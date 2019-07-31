#include "header.h"

int main(int argc,char *argv[])
{
	int n1;                                                                      
    int n2;

	n1 = isvalid(argv[2]);                                                      
   	n2 = isvalid(argv[3]);
	
	if(strcmp(argv[1],"add") == 0)
		ptr = add;

	else if(strcmp(argv[1],"sub") == 0)
        ptr = sub;

	else if(strcmp(argv[1],"mul") == 0)
        ptr = mul;
	
	else if(strcmp(argv[1],"div") == 0)
        ptr = div;
	
	else
	{
	printf("invalid\n");
	return 0;
	}
	printf("Result is: %d \n",ptr(n1,n2));

	return 0;
}







