/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:31:24 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/04 11:34:44 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	uc1;
	unsigned char	uc2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		uc1 = (unsigned char) s1[i];
		uc2 = (unsigned char) s2[i];
		if ((uc1 == '\0') || (uc1 != uc2))
			return (uc1 - uc2);
		i++;
	}
	return (0);
}
