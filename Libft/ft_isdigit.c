/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:19:41 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:39:11 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	unsigned char	c;

	if (n < 0 || n > 255)
		return (0);
	c = (unsigned char) n;
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
