/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 07:58:10 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/12 07:58:18 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	x;
	int	x_o;
	//void    *ptr;

	//ptr = "Hello";
	printf("Original function:\n");
	x_o = printf("aaa%daa%", 23);
	printf("\n");
	printf("%d", x_o);
	printf("\n");
	printf("My function ft_printf:\n");
	x = ft_printf("aaa%daa%", 23);
	printf("\n");
	printf("%d", x);
	printf("\n");
}
