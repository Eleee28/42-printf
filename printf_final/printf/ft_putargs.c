/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putargs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:23:14 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:29:57 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Print the arguments
 * 
 *  @details Call the corresponding function depending on the argument type.
 *  
 *  @param args argements of the ft_printf call
 *  @param i index of the string 
 *  @param str string with argument types
 * 
 *  @return number of characters printed
*/
int	ft_putargs(va_list args, int i, const char *str)
{
	int	num_chars;

	num_chars = 0;
	if (str[i] == 'c')
		num_chars += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		num_chars += ft_putstr(va_arg(args, char *));
	else if (str[i] == 'p')
		num_chars += ft_putptr(va_arg(args, size_t));
	else if (str[i] == 'd' || str[i] == 'i')
		num_chars += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		num_chars += ft_putunsig(va_arg(args, unsigned int));
	else if (str[i] == 'x')
		num_chars += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (str[i] == 'X')
		num_chars += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (str[i] == '%')
		num_chars += ft_putchar('%');
	return (num_chars);
}
