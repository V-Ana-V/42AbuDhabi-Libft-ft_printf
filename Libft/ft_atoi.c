//qq#include <stdio.h>
//#include <stdlib.h>

static int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (is_digit(str[i]))
	{
		num = num * 10 + sign * (str[i] - '0');
		i++;
	}
	return (num);
}
/*
int main(void)
{
	printf("My function returns %d\n", ft_atoi("   \n\t-2147483648"));
	printf("Original function returns %d\n", atoi("   \n\t-2147483648"));
	return(0);
}
*/