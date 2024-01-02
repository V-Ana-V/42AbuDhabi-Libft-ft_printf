/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:30:55 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:50:43 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*s3;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = (char *) malloc((l1 + l2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	while (i < l1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l2)
	{
		s3[l1 + i] = s2[i];
		i++;
	}
	s3[l1 + l2] = '\0';
	return (s3);
}
