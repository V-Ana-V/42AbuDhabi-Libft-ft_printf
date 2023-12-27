//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int n)
{
	unsigned char	c;

	if (n < 0 || n > 255)
		return (0);
	c = (unsigned char) n;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = -3000;
	while (i <= 3000)
	{
		if (ft_isalpha(i) != isalpha(i))
			printf("ok on %d:\n Original: %d\n Mine: %d\n", i, isalpha(i), ft_isalpha(i));
		i++;
	}
}
*/