/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_try.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 05:05:36 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/10 05:06:03 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printstr(char *s)
{
    int i;

    if (!s)
    {
        write(1, "(null)", 6);
        return (6);
    }
    i = 0;
	while (s[i])
		write(1, s + i++, 1);
    return (i);
}

// int main(void)
// {
// 	int     x;
//     int     x_o;
//     char    *s;

//     s = NULL;
// 	x = ft_printstr(s);
//     printf("\n");
// 	printf("%d", x);
//     printf("\n");
// 	x_o = printf("%s", s);
//     printf("\n");
//     printf("%d", x_o);
//     printf("\n");
// 	return (0);
// }
// Command to execute is gcc ft_printchar.c -L./Libft -lft
