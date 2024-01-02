/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:15 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:40:15 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
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
