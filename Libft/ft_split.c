#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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

static int	words_num(char const *s, char c)
{
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c && (i == 0 || (i != 0 && *(s + i - 1) == c)))
			w++;
		i++;
	}
	return (w);
}

static int	wordlen(char const *s, int i, char c)
{
	int	l;

	l = 0;
	while (*(s + i + l) != c && *(s + i + l))
		l++;
	return (l);
}

static void	free_previous(char **result, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		w;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	result = (char **) malloc((words_num(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*(s + i))
	{
		if (*(s + i) != c && (i == 0 || (i != 0 && *(s + i - 1) == c)))
		{
			result[w] = ft_substr(s, i, wordlen(s, i, c));
			if (!result[w])
			{
				free_previous(result, w);
				return (NULL);
			}
			w++;
		}
		i++;
	}
	result[words_num(s, c)] = NULL;
	return (result);
}

int	main(void)
{
	char	s[7] = "aaaaaa";
	char	c;
	int		l;
	char	**result;

	l = 0;
	c = 'a';
	result = ft_split(s, c);
	while (*(result + l))
		l++;
	printf("The length of the result is %d\n", l);
	while (*result != NULL)
	{
		printf("%s\n", *result);
		result++;
	}
	return (0);
}