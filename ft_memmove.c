void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned char *sr;
	size_t i;

	if(!dest && !src)
	{
		return (NULL);
	}
	dst = (unsigned char *) dest;
	sr = (unsigned char *) src;
	i = 0;
	if(dst > sr)
	{
		while(n > 0)
		{
			n--;
			dst[n] = sr[n];
		}
	}
	else
	{
		while(i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
