// #include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static int  num_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while(n)
	{
		len++;
		n = n / 10;
	}
	return(len);
}

static int	ft_abs(int d)
{
	if (d < 0)
		return (d * (-1));
	return (d);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*number;
	int		i;

	i = 0;
	len = num_len(n);
	number = (char *) malloc(len + 1);
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (n < 0)
		number[0] = '-';
	else if (n == 0)
		number[0] = '0';
	while (i < len && n)
	{
		number[len - 1 - i] = ft_abs(n % 10) + '0';
		n = n / 10;
		i++;
	}
	return (number);
}
/*
int main(void)
{
	int 	n;
	char	*num;

	n = -2147483648;
	num = ft_itoa(n);
	printf("%s\n", num);
	free(num);
	return (0);
}
*/