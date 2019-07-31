#include "header.h"
void str_rev(char *sbuf, char *dbuf)
{
	int len;
	len = strlen(sbuf);
	int i = len - 1;
		
	while(i != 0)
	{
		*dbuf++ = *(sbuf + i);
		i--;
	}
}


