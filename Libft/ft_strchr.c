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
char    *ft_strchr(const char *s, int c)
{
	char    ch;

	ch = (unsigned char) c;
	if (ch == '\0')
	{
		return ((char *) (s + ft_strlen(s)));
	}
	while (*s)
	{
		if(ch == *s)
			return ((char *) s);
		s++;
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
	printf("The found letter starts from here:\n Mine: %s\n Original: %s\n", ft_strchr(s, c), strchr(s, c));
}
*/