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
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_s;
	size_t	l_d;

	i = 0;
	l_d = ft_strlen(dst);
	l_s = ft_strlen(src);
	if (dstsize < l_d + 1)
		return (dstsize + l_s);
	while (i + l_d < dstsize - 1 && i < l_s)
	{
		dst[i + l_d] = src[i];
		i++;
	}
	dst[i + l_d] = '\0';
	return (l_d + l_s);
}
/*
int main(void)
{
	size_t	n;
	size_t	n_o;
	size_t	x;

	char dst[20] = "Hello";
	char src[4] = "Dog";
	char dst_o[20] = "Hello";
	char src_o[4] = "Dog";
	x = 0;
	printf("The destsize is %zu:\n\n", x);
	n = ft_strlcat(dst, src, x);
	n_o = strlcat(dst_o, src_o, x);
	printf("Resulting String: %s / original: %s\nThe value is %zu/original is %zu\n\n length of the resulting string is: %zu\n", dst, dst_o, n, n_o, ft_strlen(dst));
	x++;
}
*/