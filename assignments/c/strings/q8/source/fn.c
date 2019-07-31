int strspn(char *buf1, char *buf2)
{
	int i;
	int j ;
	int count = 0;
	
	for ( i = 0; *(buf1 + i) != '\n'; i++){
		
		if(count != i){                                                         
            return count;               
		}

		for ( j = 0; *(buf2 + j) != '\n'; j++){
	
			if(*(buf1 + i) == *(buf2 + j)){
				count++;
				break;
			}
		}	
	
	}       
	return count;            
}
