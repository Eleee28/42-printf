/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:29:17 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:36:23 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Prints a number 
 * 
 *  @details Putnbr from libft
 * 
 *  @param n number to print
 * 
 *  @return number of characters printed
*/
int	ft_putnbr(int n)
{
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	else if (n < 0)
		ft_putchar('-');
	if (n < 0)
		ft_putchar((char){'0' - (n % 10)});
	if (n >= 0)
		ft_putchar((char){'0' + (n % 10)});
	return (count_signed(n, 10));
}
