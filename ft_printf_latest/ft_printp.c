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

#include "ft_printf.h"

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

int	ft_printp(void *ptr)
{
	uintptr_t	p;

	if (ptr == NULL)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	p = (uintptr_t) ptr;
	return (ft_ptrhex(p) + 2);
}
