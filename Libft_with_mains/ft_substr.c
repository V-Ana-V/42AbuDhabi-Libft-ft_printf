#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/*
size_t ft_strlen(const char *s)
{
    size_t  l;

    l = 0;
    while (s[l])
        l++;
    return (l);
}

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
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	s_len;
	size_t	tail;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	tail = 0;
	if (start < s_len)
		tail = s_len - start;
	if (tail > len)
		tail = len;
	s_sub = (char *) malloc((tail + 1) * sizeof(char));
	if (!s_sub)
		return (NULL);
	ft_strlcpy(s_sub, s + start, tail + 1);
	return (s_sub);
}
/*
int main(void)
{
	char *ptr;
	char	arr[6] = "Hello";

	ptr = ft_substr(arr, 1, 4);
	printf("The substring is %s\n", ptr);
	free(ptr);
	return(0);
}
*/