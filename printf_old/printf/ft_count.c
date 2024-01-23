/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:58 by elena             #+#    #+#             */
/*   Updated: 2023/11/14 08:07:23 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
