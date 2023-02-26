/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:55:57 by sbadr             #+#    #+#             */
/*   Updated: 2022/11/08 11:33:28 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_put_address(void *p, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr_hex(unsigned int c, int i, int *len);
void	ft_put_unsigned(unsigned int s, int *len);
void	ft_put_address(void *p, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *str, int *len);

#endif