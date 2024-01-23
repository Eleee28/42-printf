/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:25 by elena             #+#    #+#             */
/*   Updated: 2023/11/13 14:42:17 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_nbr(size_t n, char *base)
{
	if (n / 16 != 0)
	{
		ft_puthex_nbr(n / 16, base);
	}
	ft_putchar((char){*(base + (n % 16))});
	return (count_digits(n, 16));
}
