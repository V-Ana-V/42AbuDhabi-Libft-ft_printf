/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:59:16 by codespace         #+#    #+#             */
/*   Updated: 2024/01/11 04:59:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "Libft/libft.h"

int	ft_printhex(unsigned int nb, char c)
{
	char	count;
	char	d;
	char	*hex;

	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (c == 'x')
		hex = "0123456789abcdef";
	count = 0;
	if (nb / 16 != 0)
		count += ft_printhex(nb / 16, c);
	d = hex[nb % 16];
	write(1, &d, 1);
	count++;
	return (count);
}

// int	main(void)
// {
// 	unsigned int	q;
// 	int				x;
// 	int				x_o;

// 	q = 456;
// 	printf("Original function:\n");
// 	x_o = printf("%X", q);
// 	printf("\n");
// 	printf("%d", x_o);
// 	printf("\n");
// 	printf("My function:\n");
// 	x = ft_printhex(q, 'X');
// 	printf("\n");
// 	printf("%d\n", x);
// }
