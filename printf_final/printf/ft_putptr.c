/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:30:03 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:36:47 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Prints a pointer
 * 
 *  @param ptr pointer to print
 * 
 *  @return number of characters printed
*/
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
