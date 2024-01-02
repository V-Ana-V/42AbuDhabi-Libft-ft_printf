/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:31:24 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:53:23 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		diff = *(s1 + i) - *(s2 + i);
		if ((*(s1 + i) == '\0') || (*(s2 + i) == '\0'))
		{
			return (diff);
		}
		else
		{
			if (diff != 0)
			{
				return (diff);
			}
			i++;
		}
	}
	return (0);
}
