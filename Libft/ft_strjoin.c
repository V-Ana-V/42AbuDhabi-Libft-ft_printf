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
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*s3;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = (char *) malloc((l1 + l2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	while (i < l1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l2)
	{
		s3[l1 + i] = s2[i];
		i++;
	}
	s3[l1 + l2] = '\0';
	return (s3);
}
/*
int main(void)
{
	char	arr1[5] = "aaaa";
	char	arr2[7] = "bbbbbb";

	printf("the result is %s\n and string lrngth is %zu\n", ft_strjoin(arr1, arr2), ft_strlen(ft_strjoin(arr1, arr2)));
	return (0);
}
*/