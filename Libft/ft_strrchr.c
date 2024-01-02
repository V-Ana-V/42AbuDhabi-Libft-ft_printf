/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:32:06 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:56:02 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		l;
	int		i;

	l = ft_strlen(s);
	i = 0;
	ch = (unsigned char) c;
	while (i <= l)
	{
		if (ch == *(s + l - i))
			return ((char *)(s + l - i));
		i++;
	}
	return (NULL);
}
