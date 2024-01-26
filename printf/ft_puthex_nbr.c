/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:25 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:33:22 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Prints an hexadecimal number
 * 
 *  @details similar as putnbr from libft
 * 
 *  @param n number to print
 *  @param base string with the base
 * 
 *  @return number of digits printed
*/
int	ft_puthex_nbr(size_t n, char *base)
{
	if (n / 16 != 0)
	{
		ft_puthex_nbr(n / 16, base);
	}
	ft_putchar((char){*(base + (n % 16))});
	return (count_digits(n, 16));
}
