void strcopy(char *sbuf, char *dbuf, int n)                                            
{                                         
	int count = 0; 
//	printf("%s",dbuf);                                        
    while(count != n){
		*(dbuf++) = *(sbuf++);
		count++;
	}
//	printf("%s",dbuf);                                            
}                      
