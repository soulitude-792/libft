char *ft_strrchrconst (char *str, int c)
{
	char *last_match;

	last_match = NULL;
	while (*str)
	{
		if(*str == (char)c)
			last_match = ((char *)str);
		str++;
	}
	if((char)c == '\0')
		return ((char *)str);
	return last_match;
}
