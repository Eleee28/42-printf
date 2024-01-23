/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:29:12 by ejuarros          #+#    #+#             */
/*   Updated: 2024/01/23 10:13:54 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Computes the length of a string
 * 
 * 	@param str string
 * 	@return length of str
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

/** @brief Computes the length of a signed number in a decimal base
 * 
 * 	@param n number
 * 
 * 	@return length of n
*/
int	ft_numlen(long int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/** @brief Computes the length of an unsigned number in a given base
 * 
 * 	@param n number
 *  @param base base of the number
 * 
 * 	@return length of n
*/
int	ft_unsiglen(unsigned long int n, int base)
{
	int	i;

	i = 1;
	while (n / base != 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}

/** @brief converts a letter from lower case to upper case
 * 
 * 	@param c character to convert
 * 	@return the uppper case letter if c is a lower case letter, c otherwise
*/
int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		c -= 32;
	return (c);
}
