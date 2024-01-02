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

static int	overlap(unsigned char *src, unsigned char *dst, size_t len)
{
	size_t	i;
	size_t	j;
	int		diff;

	diff = 0;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (src + i == dst + j)
				diff = i - j;
			j++;
		}
		i++;
	}
	return (diff);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				diff;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	ptr_src = (unsigned char *) src;
	ptr_dst = (unsigned char *) dst;
	diff = overlap(ptr_src, ptr_dst, len);
	if (diff <= 0)
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
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
