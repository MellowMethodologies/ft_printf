/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:30:18 by sbadr             #+#    #+#             */
/*   Updated: 2022/11/08 19:06:11 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int s, int *len)
{
	unsigned int	lli;

	lli = s;
	if (lli > 9)
	{
		ft_putnbr(lli / 10, len);
		ft_putchar((lli % 10) + '0', len);
	}
	else if (lli < 10)
		ft_putchar(lli + '0', len);
}
