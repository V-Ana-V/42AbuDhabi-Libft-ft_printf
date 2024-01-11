/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printud.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:54:56 by codespace         #+#    #+#             */
/*   Updated: 2024/01/11 03:55:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "Libft/libft.h"

int	ft_printud(unsigned int nb)
{
	char			count;
	unsigned int	d;

	count = 0;
	if (nb / 10 != 0)
		count += ft_printud(nb / 10);
	d = nb % 10 + 48;
	write(1, &d, 1);
	count++;
	return (count);
}

// int	main(void)
// {
// 	unsigned int	q;
// 	int				x;
// 	int				x_o;

// 	q = UINT_MAX;
// 	printf("Original function:\n");
// 	x_o = printf("%u", q);
// 	printf("\n");
// 	printf("%d", x_o);
// 	printf("\n");
// 	printf("My function:\n");
// 	x = ft_printud(q);
// 	printf("\n");
// 	printf("%d\n", x);
// }
