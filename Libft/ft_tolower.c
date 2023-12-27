// #include <stdio.h>
// #include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}
/*
int main(void)
{
	int	i;

	i = -1000;
	while (i < 3000)
	{
		if (ft_tolower(i) != tolower(i))
			printf("For value %d: Mine: %d, Original: %d\n", i, ft_tolower(i), tolower(i));
		i++;
	}
	printf("%d\n", tolower(321));
	return (0);
}
*/