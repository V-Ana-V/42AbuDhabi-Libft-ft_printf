/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:18:42 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/11 18:18:47 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int		ft_printchar(int c);
int 	ft_printstr(char *s);
int 	ft_printp(void *ptr) 
int		ft_printint(int nb);
int		ft_printud(unsigned int nb);
int		ft_printhex(unsigned int nb, char c);
void	ft_printf(char *str, ...);

#endif
