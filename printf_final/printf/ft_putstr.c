/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:34:02 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:38:25 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Prints a string ("null") 
 * 
 *  @param s string to print
 * 
 *  @return void
*/
static void	putnull(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

/** @brief Prints a string
 * 
 *  @param s string to print
 * 
 *  @return number of characters printed
*/
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		putnull("(null)");
		return (ft_strlen("(null)"));
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (ft_strlen(s));
}
