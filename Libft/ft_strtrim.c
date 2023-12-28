#include <stdio.h>
#include <stdlib.h>
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
*/
static int in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
/*
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
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		l;

	start = 0;
	end = 0;
	l = ft_strlen(s1);
	while (*(s1 + start) && in_set(*(s1 + start), set))
		start++;
	while (l - start - end > 0 && in_set(*(s1 + l - 1 - end), set))
		end++;
	result = malloc(l - end - start + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1 + start, l - end - start + 1);
	return(result);
}
/*
int main(void)
{
	char	s1[9] = "aDHHHHDb";
	char	set[3] = "ab";
	char	*result;

	result = ft_strtrim(s1, set);
	if (*result == '\0')
		printf("The result is empty string");
	else
		printf("The result of trimming is: %s\n", result);
}
*/