//#include <string.h>
#include <stddef.h>
#include <stdio.h>
/*
size_t ft_strlen(const char *s)
{
	size_t  l;

	l = 0;
	while(*(s + l))
		l++;
	return (l);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;
	int		diff;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		diff = *(s1 + i) - *(s2 + i);
		if ((*(s1 + i) == '\0') || (*(s2 + i) == '\0'))
		{
			return (diff);
		}
		else
		{
			if (diff != 0)
			{
				return (diff);
			}
			i++;
		}
	}
	return (0);
}
*/
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  len_needle;
	size_t	i;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!*needle)
		return  (char *) haystack;
	else if (len == 0)
		return NULL;
	else
		{
			while ((i < len) && haystack[i])
			{
				if (haystack[i] == needle[0] && len - i >= len_needle)
				{
					if(ft_strncmp(haystack + i, needle, len_needle) == 0)
						return ((char *) (haystack + i));
				}
				else
					i++;
			}
			return (NULL);
		}
}
/*
int main(void)
{
	char	haystack[27] = "Ellie, Maxim, Nastia, Sofa";
	char	needle[7] = "\0";
	char	*result;
	char	*result_o;

	result = ft_strnstr(haystack, needle, 20);
	result_o = strnstr(haystack, needle, 20);
	printf("My result is %s\n", result);
	printf("Original result is %s\n", result_o);
}
*/