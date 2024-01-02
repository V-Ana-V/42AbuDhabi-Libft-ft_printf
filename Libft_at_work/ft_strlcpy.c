#include <stdio.h>
//#include <string.h>
/*
size_t	ft_strlen(const char *s)
{
    size_t  l;

    l = 0;
    while (s[l])
        l ++;
    return (l);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return(l);
	while (i < dstsize - 1 && i < l)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
int main(int ac, char **av)
{
	if (ac != 5)
		return (0);
	printf("Source: %s\n", av[1]);
	printf("Destination: %s\n", av[2]);
	printf("Copy %zu symbols from source\n", ft_strlcpy(av[2], av[1], 3));
	printf("Result destination: %s\n", av[2]);
	printf("Source_original: %s\n", av[3]);
	printf("Destination_original: %s\n", av[4]);
	printf("Copy %zu symbols from source_original\n", strlcpy(av[4], av[3], 3));
	printf("Result destination_original: %s\n", av[2]);
	return (0);
}
*/