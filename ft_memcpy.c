void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sr;
	size_t i;
	
	if(!dest && !src)
		return (NULL);
	ds = (unsigned char *)dest;
	sr = (const unsigned char *)src;

	i = 0;
	while(i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
