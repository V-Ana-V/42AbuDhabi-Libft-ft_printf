/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:13:25 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/11 09:13:38 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "Libft/libft.h"
#include <stdint.h>

static uintptr_t	ft_ptrhex(uintptr_t p)
{
	int		count;
	char	d;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (p / 16 != 0)
		count += ft_ptrhex(p / 16);
	d = hex[p % 16];
	write(1, &d, 1);
	count++;
	return (count);
}

int ft_printp(void *ptr) 
{
	uintptr_t	p;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	p = (uintptr_t) ptr;
	return (ft_ptrhex(p) + 2);
}

// int	main(void)
// {
// 	void	*ptr;
// 	int		x;
// 	int		x_o;

// 	ptr = NULL;
// 	printf("Original function:\n");
// 	x_o = printf("%p", ptr);
// 	printf("\n");
// 	printf("%d", x_o);
// 	printf("\n");
// 	printf("My function:\n");
// 	x = ft_printp(ptr);
// 	printf("\n");
// 	printf("%d\n", x);
// }
//Command to execute gcc ft_printp.c -L./Libft -lft
