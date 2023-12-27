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
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || start + len > s_len)
	{
		s_sub = (char *) malloc(sizeof(char));
		if (!s_sub)
			return (NULL);
		s_sub[0] = '\0';
		return (s_sub);
	}
	s_sub = (char *) malloc((len + 1) * sizeof(char));
	if (!s_sub)
		return (NULL);
	while (i < len)
	{
		s_sub[i] = s[start + i];
		i++;
	}
	s_sub[i] = '\0';
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