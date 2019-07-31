//to copy a string

void strcopy(char *sbuf, char *dbuf)                                            
{                                                                           
    while((*sbuf) != '\0'){
		*(dbuf++) = *(sbuf++);
	}                                             
}                                     
