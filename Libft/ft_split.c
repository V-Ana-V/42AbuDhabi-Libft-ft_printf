#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/*
size_t	ft_strlen(const char *s)
{
	size_t	l;

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
		return (l);
	while (i < dstsize - 1 && i < l)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

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
*/
static int	wordlen(char const *s, int i, char c)
{
	int	l;

	l = 0;
	while (*(s + i + l) != c && *(s + i + l))
		l++;
	return (l);
}

static char	**free_previous(char **res_start, char **result)
{
	char	**start;

	start = res_start;
	while (res_start != result)
	{
		free(*res_start);
		res_start++;
	}
	free(start);
	return(NULL);
}

static char	**create_arr(char const *s, char c)
{
	int		w;
	int		i;
	char	**result;

	if (!s)
		return (NULL);
	w = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c && (i == 0 || (i != 0 && *(s + i - 1) == c)))
			w++;
		i++;
	}
	result = (char **) malloc((w + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[w] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	char	**res_start;

	i = 0;
	result = create_arr(s, c);
	if (!result)
		return (NULL);
	res_start = result;
	while (*(s + i))
	{
		if (*(s + i) != c && (i == 0 || (i != 0 && *(s + i - 1) == c)))
		{
			*result = ft_substr(s, i, wordlen(s, i, c));
			if (!(*result))
				return (free_previous(res_start, result));
			result++;
		}
		i++;
	}
	return (res_start);
}
/*
int	main(void)
{
	char	s[11] = "I love you";
	char	c;
	int		l;
	char	**result;
	char	**res_start;

	l = 0;
	c = ' ';
	result = ft_split(s, c);
	res_start = result;
	while (*(result + l))
		l++;
	printf("The length of the result is %d\n", l);
	if (*result == NULL)
		printf("all are split characters");
	while (*result != NULL)
	{
		printf("%s\n", *result);
		result++;
	}
	free(res_start);
	return (0);
}
*/