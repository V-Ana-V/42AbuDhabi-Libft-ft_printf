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
		return (ft_printp(va_arg(args, void *)));
	else if (fsp == 'd' || fsp == 'i')
		return (ft_printint(va_arg(args, int)));
	else if (fsp == 'u')
		return (ft_printud(va_arg(args, unsigned int)));
	else if (fsp == 'x' || fsp == 'X')
		return (ft_printhex(va_arg(args, unsigned int), fsp));
	else
	{
		if (fsp == '\0')
			return (-1);
		else
		{
			write(1, "%", 1);
			return (ft_printchar(fsp) + 1);
		}
	}
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		count;
	int		len_i;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			len_i = print_fsp(*(str + 1), args);
			if (len_i == -1)
				return (-1);
			count += len_i;
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
