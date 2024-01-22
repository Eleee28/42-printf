/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 05:52:58 by elena             #+#    #+#             */
/*   Updated: 2024/01/21 23:04:15 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* @brief Printf function from stdio.h
*
*  (EXPLANATION)
*
*  @param str string with text, flags and type identifiers
*  @param ... unkown number of parameters to print
*
*  @return length of the printed output
*/
int	ft_printf(char const *str, ...)
{
	va_list	args;
	t_flags	flags;
	int		len;
	int		i;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	i = 0;
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i += ft_flags(&flags, &str[i]);
			ft_putargs(&len, &flags, args);
		}
		else
			ft_printchr(&len, str[i]);
		i++;
	}
	va_end(args);
	return (len);
}