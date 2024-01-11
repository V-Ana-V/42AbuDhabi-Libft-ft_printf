/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 05:53:08 by codespace         #+#    #+#             */
/*   Updated: 2024/01/11 05:53:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "Libft/libft.h"
#include <stdint.h>

void ft_printp(void *ptr) 
{
	uintptr_t	p;
	char	count;
	char	d;
	char	*hex;

	p = (uintptr_t) ptr;

	count = 0;
	if (nb / 16 != 0)
		count += ft_printhex(nb / 16, c);
	d = hex[nb % 16];
	write(1, &d, 1);
	count++;
	return (count);
}
