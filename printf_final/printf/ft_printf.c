/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:21:27 by elena             #+#    #+#             */
/*   Updated: 2023/11/13 21:36:02 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
