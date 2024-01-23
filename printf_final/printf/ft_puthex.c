/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:26:22 by elena             #+#    #+#             */
/*   Updated: 2023/11/13 21:56:13 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t n, char c)
{
	int	num_chars;

	num_chars = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (c == 'x')
		num_chars += ft_puthex_nbr(n, "0123456789abcdef");
	else if (c == 'X')
		num_chars += ft_puthex_nbr(n, "0123456789ABCDEF");
	return (num_chars);
}

int	ft_puthex_ptr(size_t ptr)
{
	int	num_chars;

	num_chars = 0;
	num_chars += ft_puthex_nbr(ptr, "0123456789abcdef");
	return (num_chars);
}

/*

return (count_digits(n, 16));

*/