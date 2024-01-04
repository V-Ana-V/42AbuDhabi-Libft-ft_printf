/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:31:00 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:51:16 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_s;
	size_t	l_d;

	i = 0;
	l_d = ft_strlen(dst);
	l_s = ft_strlen(src);
	if (dstsize < l_d + 1)
		return (dstsize + l_s);
	while (i + l_d < dstsize - 1 && i < l_s)
	{
		dst[i + l_d] = src[i];
		i++;
	}
	dst[i + l_d] = '\0';
	return (l_d + l_s);
}
