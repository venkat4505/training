
void  snappend (char *str1, char *str2 , int n)
{
	int i = 0;
	while (*str2++){
	}
	str2--;
	str2--;
	while(*(str1 + i) != *(str1 + n)){
	*str2++ = *(str1 + i);
	i++;
    }
	
	*str2 = '\0';
}
