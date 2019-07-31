#include<header.h>

int isvalid( char *str )

{
	int i = 0;
	signed int res = 0;
	signed int flag = 1;

	if( '+' == *str )
	{
		flag = 1;
		i++;
	}
	if( '-' == *str )                                                         
	{
		flag = -1;                                                               
		i++;
	}
	for(  ; i < str_len( str ); i++ )
	{
		if( ( *(str + i ) >= '0' ) && ( *(str + i) <= '9' ) )
		{
			res = ( res * 10 ) + ( *(str + i) - '0' );
		}
		else
		{
			printf("INVALID INPUT TRY AGAIN \n");
			//exit (0);
			main();
		}
	}

	res = res * flag;

	if( ( res >= -214745682  ) && ( res <= 214745681 ) )
	{
		return res;
	}
	else                                                                    
	{                                                                       
		printf("\n NOT IN RANGE TRY AGAIN \n ");
		//exit (0);
		main();
	} 
	return res;
}
