/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:30:03 by elena             #+#    #+#             */
/*   Updated: 2023/11/14 08:06:23 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(size_t ptr)
{
	int	chars;

	chars = 0;
	if (ptr == 0)
		chars += ft_putstr("0x0");
	else
	{
		chars += ft_putstr("0x");
		chars += ft_puthex_ptr(ptr);
	}
	return (chars);
}
