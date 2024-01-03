/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:31:17 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:52:54 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			l;
	unsigned int	i;
	char			*s_new;

	if (!s || !f)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	s_new = (char *) malloc(l + 1);
	if (!s_new)
		return (NULL);
	while (*(s + i))
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
