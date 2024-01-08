// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 'A' - 'a');
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
		if (ft_toupper(i) != toupper(i))
			printf("For value %d: Mine: %d, Original: %d\n", i, ft_toupper(i), toupper(i));
		i++;
	}
	return (0);
}
*/