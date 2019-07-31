#include "header.h"
int main()
{
	char *sbuf;
	char *dbuf;

	sbuf = (char *)malloc(sizeof(char) * size);
	dbuf = (char *)malloc(sizeof(char) * size);
	
	printf("Enter the source string:");
	fgets(sbuf , size ,stdin);
	 printf("%s\n", sbuf);     
	str_rev(sbuf,dbuf);

/*	if(char_val(sbuf) == 0)
	{
		str_rev(sbuf , strlen(sbuf));
		printf("Reverse String : ");
		fputs(sbuf , stdout); 
		printf("\n");
	}
	else
		printf("Invalid User Input.......Plz Checki\n");*/

	printf("%s\n", dbuf);  
	return 0;
}
