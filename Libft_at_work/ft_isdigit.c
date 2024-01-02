//#include <stdio.h>
//#include <ctype.h>

int ft_isdigit(int n)
{
	unsigned char	c;

	if (n < 0 || n > 255)
		return (0);
	c = (unsigned char) n;
	if (c >= '0' && c <= '9')
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
		if (ft_isdigit(i) != isdigit(i))
			printf("ok on %d:\n Original: %d\n Mine: %d\n", i, isdigit(i), ft_isdigit(i));
		i++;
	}
    i = -5;
    while (i <= 140)
	{
		printf("for i=%d the result is %d\n", i, isdigit(i));
        i++;
	}
}
*/