/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:34:33 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:38:51 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Prints an unsigned number
 * 
 *  @param n number to print
 * 
 *  @return number of characters printed
*/
int	ft_putunsig(size_t n)
{
	if (n / 10 != 0)
	{
		ft_putunsig(n / 10);
	}
	ft_putchar((char){'0' + (n % 10)});
	return (count_digits(n, 10));
}
