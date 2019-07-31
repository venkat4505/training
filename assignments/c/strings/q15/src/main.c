#include "header.h" 
int main()
{
	char *str;
	char ch;
	int pos;
	int i = 0;
//	int len = length(str);

	str = (char *)malloc(sizeof(char) * SIZE);
	
	printf("Enter the source string");
	fgets(str , SIZE ,stdin);

	printf("Enter The Position:");
	scanf("%d", &pos);

	printf("enter the character:");
	ch = getchar();

	insertchar(str, ch, pos);

/*	fgets(num , SIZE , stdin);	
	if(char_val(sbuf) == 0)
	{
		insertchar(sbuf , getchar() , atoi_1(num) , strlen(sbuf)); 
		fputs(sbuf, stdout);
		printf("\n");
	}
	else
		printf("Invalid User Input.......Plz Check");*/
	printf("the new string is %s\n", str);       
	return 0;
}
