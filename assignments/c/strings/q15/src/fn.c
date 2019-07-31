char *insertchar (char *str, const char ch , int pos)
{
	while (len >= pos){
		*(str + (len + 1)) = (str + len);
		len--;
	}
	*(str + len) = ch;
}
