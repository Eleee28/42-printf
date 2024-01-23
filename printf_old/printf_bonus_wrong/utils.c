/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:43:42 by ejuarros          #+#    #+#             */
/*   Updated: 2024/01/22 11:21:42 by ejuarros         ###   ########.fr       */
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

/** @brief Computes the length of a pointer (int)
 * 
 * 	@param n number
 *  @param base base of the number
 * 
 * 	@return length of n
*/
int	ft_numlen(long int n, int base)
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
