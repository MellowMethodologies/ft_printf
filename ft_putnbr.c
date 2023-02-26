/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:32:14 by sbadr             #+#    #+#             */
/*   Updated: 2022/11/08 11:30:06 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long long int	lli;

	lli = n;
	if (lli < 0)
	{
		ft_putchar('-', len);
		lli = -lli;
	}
	if (lli > 9)
	{
		ft_putnbr(lli / 10, len);
		ft_putchar((lli % 10) + '0', len);
	}
	else if (lli < 10)
		ft_putchar(lli + '0', len);
}
