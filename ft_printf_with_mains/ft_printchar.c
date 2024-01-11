/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 05:00:19 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/10 05:01:26 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

// int main(void)
// {
// 	int	x;

// 	x = ft_printchar(1129999999999999999);
// 	printf("\n%d\n", x);
// 	printf("%c\n", 1129999999999999999);
// 	return (0);
// }
// Command to execute is gcc ft_printchar.c -L./Libft -lft