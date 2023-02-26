/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:14:05 by sbadr             #+#    #+#             */
/*   Updated: 2022/11/08 19:09:01 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_hex_u(size_t c, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putnbr_hex_u(c / 16, len);
		ft_putchar(base[c % 16], len);
	}
	else if (c < 16)
		ft_putchar(base[c], len);
}

void	ft_put_address(void *p, int *len)
{
	ft_putstr("0x", len);
	ft_putnbr_hex_u((size_t)p, len);
}
