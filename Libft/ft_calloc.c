/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:18:32 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:36:23 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count && SIZE_MAX / count < size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *) ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
