#include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;
	int		diff;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		diff = *(s1 + i) - *(s2 + i);
		if ((*(s1 + i) == '\0') || (*(s2 + i) == '\0'))
		{
			return (diff);
		}
		else
		{
			if (diff != 0)
			{
				return (diff);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		cmp;
	int		original;

	s1 = "banana";
	s2 = "bananar";
	original = strncmp(s1, s2, 7);
	cmp = ft_strncmp(s1, s2, 7);
	printf("The function strncmp returns %d,"
		"\nMy function returns %d\n", original, cmp);
	return (0);
}
*/