/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:15:04 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/11 09:15:17 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "Libft/libft.h"

int	ft_printint(int nb)
{
	char	count;
	int		d;

	count = 0;
	if (nb == -2147483648)
	{
		count = 11;
		write(1, "-2147483648", 11);
		return (count);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		count++;
		nb = -nb;
	}
	if (nb / 10 != 0)
		count += ft_printint(nb / 10);
	d = nb % 10 + 48;
	write(1, &d, 1);
	count++;
	return (count);
}

// int	main(void)
// {
// 	int	x;
// 	int	x_o;
// 	int	example;

// 	example = -345689;
// 	printf("Original function prints:");
// 	printf("\n");
// 	x_o = printf("%d", example);
// 	printf("\n");
// 	printf("My function prints:");
// 	printf("\n");
// 	x = ft_printint(example);
// 	printf("\n");
// 	printf("Original function returns: %d", x_o);
// 	printf("\n");
// 	printf("My function returns: %d", x);
// 	printf("\n");
// 	return (0);
// }
//Command to execute is gcc ft_printchar.c -L./Libft -lft
