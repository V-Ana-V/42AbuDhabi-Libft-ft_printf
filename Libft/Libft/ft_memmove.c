/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:29:45 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:42:35 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	ptr_src = (unsigned char *) src;
	ptr_dst = (unsigned char *) dst;
	if (ptr_dst <= ptr_src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[len - 1 - i] = ptr_src[len - 1 - i];
			i++;
		}
	}
	return (dst);
}
