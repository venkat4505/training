#include "header.h"
int main()
{
	char *buf;
	char *ch;
	char c;
	
	buf = (char *) malloc(50 * sizeof (char));
	if (buf == NULL){                                                          
    printf("out of memory");                                                    
    exit(1);                                                                    
    }   

	ch = (char *) malloc(10 * sizeof (char));
	if (ch == NULL){                                                           
    printf("out of memory");                                                    
    exit(1);
    }   
	
	printf("enter the string");
	fgets(buf, 50, stdin);

	printf("enter the character:");
	fgets(ch, 2, stdin);

	c = ch[0];

	chr_add(buf, c);

	printf("%p\n", buf );
	
	return 0;
}         
