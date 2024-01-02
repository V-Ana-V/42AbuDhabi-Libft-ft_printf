/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:30:32 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:48:37 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (unsigned char) c;
	if (ch == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	while (*s)
	{
		if (ch == *s)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
