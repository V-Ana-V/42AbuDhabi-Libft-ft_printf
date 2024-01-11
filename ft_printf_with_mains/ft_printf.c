/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:16:48 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/11 09:16:52 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_fsp(char fsp, va_list args)
{
	if (fsp == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (fsp == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (fsp == 'p')
		return (ft_printp(va_arg(args, uintptr_t)));
	else if (fsp == 'd' || fsp == 'i')
		return (ft_printint(va_arg(args, int)));
	else if (fsp == 'u')
		return (ft_printud(va_arg(args, unsigned int)));
	else if (fsp == 'x' || fsp == 'X')
		return (ft_printhex(va_arg(args, unsigned int), fsp));
	else
	{
		write(1, "%", 1);
		if (fsp == '\0')
			return (1);
		else
			return (ft_printchar(c) + 1);
	}
}

void	ft_printf(char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			count += print_fsp(*(str + 1), args);
			str++;
		}
		else
			count += ft_printchar(*str);
		if (*str == '\0')
			break ;
		str++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	printf("%d\n", printf("\0"));
// }
