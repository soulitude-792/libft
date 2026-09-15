void *memset(void *p, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;
    
    ptr = (unsigned char *)p;
    i = 0;

    while(i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return p;
}
