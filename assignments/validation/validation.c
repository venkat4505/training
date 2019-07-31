#include<header.h>

int isvalid( char *str )

{
	int i = 0;
	signed int res = 0;
	signed int sign = 1;
	
	for (i = 0 ;i < str_len( str ); i++ ) {//white space skip
	
		if (*(str + i) != ' ') {
			break;
		}
	}			
	
	sign = (*(str + i) == '-') ? -1 : 1;//sign validation
	
	if(*str == '+' || *str == '-') {
		i++;
	}

	for(  ; i < str_len( str ); i++ )//number validation
	{
		if( ( *(str + i ) >= '0' ) && ( *(str + i) <= '9' ) )
		{
			res = ( res * 10 ) + ( *(str + i) - '0' );
		}
		else
		{
			printf("Invalid input ");
			exit (0);
		}
	}

	res = res * sign;

	if( ( res >= -214745682  ) && ( res <= 214745681 ) ) //range validation
	{
		return res;
	}
	else                                                                    
	{                                                                       
		printf("\n Invalid input ");
		exit (0);
	} 
	return res;
}
