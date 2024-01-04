/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:20:39 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:41:22 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s_byte;
	size_t			i;

	i = 0;
	ch = (unsigned char) c;
	s_byte = (unsigned char *) s;
	while (i < n)
	{
		if (s_byte[i] == ch)
			return (s_byte + i);
		i++;
	}
	return (NULL);
}
