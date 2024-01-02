/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:31:53 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:55:23 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	size_t	i;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!*needle)
		return ((char *) haystack);
	else if (len == 0)
		return (NULL);
	else
	{
		while ((i < len) && haystack[i])
		{
			if (haystack[i] == needle[0] && len - i >= len_needle)
			{
				if (ft_strncmp(haystack + i, needle, len_needle) == 0)
					return ((char *)(haystack + i));
			}
			else
				i++;
		}
		return (NULL);
	}
}
