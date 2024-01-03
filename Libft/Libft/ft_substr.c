/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:32:18 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:56:59 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	s_len;
	size_t	tail;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	tail = 0;
	if (start < s_len)
		tail = s_len - start;
	if (tail > len)
		tail = len;
	s_sub = (char *) malloc((tail + 1) * sizeof(char));
	if (!s_sub)
		return (NULL);
	ft_strlcpy(s_sub, s + start, tail + 1);
	return (s_sub);
}
