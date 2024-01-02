#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
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
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			l;
	unsigned int	i;
	char			*s_new;

	if (!s || !f)
        return (NULL);
	i = 0;
	l = ft_strlen(s);
	s_new = (char *) malloc(l + 1);
	if (!s_new)
		return (NULL);
	while (*(s + i))
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
/*
char	f(unsigned int i, char c)
{
	c = (char) (i + 48);
	return (c);
}

int main(void)
{
	char	s[11] = "0000000000";
	
	printf("%s\n", ft_strmapi(s, f));
	return (0);
}
*/