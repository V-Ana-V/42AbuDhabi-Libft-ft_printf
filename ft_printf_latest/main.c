/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:58:49 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/13 17:10:51 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				x;
	int				x_o;

	printf("Original function:\n");
	x_o = printf("\0");
	printf("\n");
	printf("%d", x_o);
	printf("\n");
	printf("My function:\n");
	x = ft_printf("\0");
	printf("\n");
	printf("%d\n", x);
}
