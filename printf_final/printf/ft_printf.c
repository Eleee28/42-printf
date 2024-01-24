/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:21:27 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:26:28 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Printf function from stdio.h
*
*  @details After a '%' we read arguments, else we print.
*  va_list is used to accept a variable number of arguments
*  va_start is used for "starting the list" (initiates the list to point 
*  	to the first variable argument)
*  va_arg is used to get the next argument from the list
*  va_end is used for "ending the list", it cleans things up
*
*  @param str string with text, flags and type identifiers
*  @param ... unkown number of parameters to print
*
*  @return length of the printed output
*/
int	ft_printf(char const *str, ...)
{
	int		i;
	int		num_chars;
	va_list	args;

	i = 0;
	num_chars = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			num_chars += ft_putchar(str[i]);
		else
		{
			i++;
			num_chars += ft_putargs(args, i, str);
		}
		i++;
	}
	va_end(args);
	return (num_chars);
}
