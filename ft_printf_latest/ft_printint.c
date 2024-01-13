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

#include "ft_printf.h"

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
