#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t  l;

    l = 0;
    while (s[l])
        l++;
    return (l);
}
/*
int main(void)
{
    char    *s;

    s = "Hello";
    printf("%lu\n", strlen(s));
}
*/