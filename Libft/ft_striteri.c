#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void    ft_striteri(char *s, void (*f) (unsigned int, char*))
{
    int i;

    if (!s || !f)
        return;
    i = 0;
    while (*(s + i))
    {
        f(i, s + i);
        i++;
    }
}
/*
void    f(unsigned int i, char *c)
{
	*c = (char) (i + 48);
}

int main(void)
{
	char	s[11] = "0000000000";
	
    ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}
*/