/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:30:43 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:49:28 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	int		l;
	int		i;
	char	*s1_dup;

	i = 0;
	l = ft_strlen(s1);
	s1_dup = (char *) malloc(l + 1);
	if (s1_dup == 0)
		return (NULL);
	while (i < l)
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}
