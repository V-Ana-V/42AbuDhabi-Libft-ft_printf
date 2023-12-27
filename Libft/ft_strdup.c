#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
char	*ft_strdup(const char *s1)
{
	int		l;
	int		i;
	char	*s1_dup;

	i = 0;
	l = ft_strlen(s1);
	s1_dup = (char *) malloc(l + 1);
	if (s1_dup == 0)
		return NULL;
	while(i < l)
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}