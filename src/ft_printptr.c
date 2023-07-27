/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:50:18 by mcarneir          #+#    #+#             */
/*   Updated: 2023/05/02 16:23:14 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		ft_printstr("(nil)");
		return (5);
	}
	ft_printstr("0x");
	len = ft_putnbr_hex(n, 1);
	return (len + 2);
}
