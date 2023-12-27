// #include <string.h>
#include <stddef.h>
// #include <stdio.h>
/*
size_t ft_strlen(const char *s)
{
	size_t  l;

	l = 0;
	while(*(s + l))
		l++;
	return (l);
}
*/
char    *ft_strrchr(const char *s, int c)
{
	char    ch;
	int     l;
	int     i;

	l = ft_strlen(s);
	i = 0;
	ch = (unsigned char) c;
	while (i <= l)
	{
		if (ch == *(s + l - i))
			return ((char *) (s + l - i));
		i++;
	}
	return NULL;
}
/*
int main(void)
{
	int    c;
	char    *s;
	
	s = "My doggie is cavapoo";
	c = 353;
	printf("The found letter starts from here:\n Mine: %s\n Original: %s\n", ft_strrchr(s, c), strrchr(s, c));
}
*/