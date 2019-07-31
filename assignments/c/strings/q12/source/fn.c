char squeeze(char *str, char *temp)
{
	int i = 0;
	while (*(str + i) != '\0'){

		if (*(str + i) != *(str + i + 1)){
			*temp++ = *(str + i);
		}
		i++;
	}
}
