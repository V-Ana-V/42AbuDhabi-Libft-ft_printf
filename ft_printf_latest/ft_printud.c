/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printud.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:14:22 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/11 09:14:34 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
