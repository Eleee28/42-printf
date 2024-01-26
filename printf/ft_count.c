/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:58 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:06:44 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Count the digits of an unsigned number
 * 
 *  @param n number
 *  @param numDig base of the number
 * 
 *  @return digits of the number 
*/
int	count_digits(size_t n, int numDig)
{
	int	digits;

	digits = 1;
	while (n / numDig != 0)
	{
		digits++;
		n /= numDig;
	}
	return (digits);
}

/** @brief Count the digits of a signed number
 * 
 *  @param n number
 *  @param numDig base of the number
 * 
 *  @return digits of the number 
*/
int	count_signed(int n, int numDig)
{
	int	digits;

	digits = 1;
	if (n < 0)
		digits++;
	while (n / numDig != 0)
	{
		digits++;
		n /= numDig;
	}
	return (digits);
}

/** @brief Computes the length of a string
 * 
 * 	@param str string
 * 	@return length of str
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
