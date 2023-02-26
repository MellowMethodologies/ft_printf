/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:12:15 by sbadr             #+#    #+#             */
/*   Updated: 2022/11/08 11:34:35 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int c, int i, int *len)
{
	char	*base;

	if (i == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (c < 0)
	{
		c = -c;
		ft_putchar('-', len);
	}
	else if (c >= 16)
	{
		ft_putnbr_hex(c / 16, i, len);
		ft_putchar(base[c % 16], len);
	}
	else if (c < 16)
		ft_putchar(base[c], len);
}
