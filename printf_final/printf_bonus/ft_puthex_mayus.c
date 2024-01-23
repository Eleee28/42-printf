/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_mayus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:49:00 by ejuarros          #+#    #+#             */
/*   Updated: 2024/01/23 10:01:33 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*static int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 16 != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}*/

static void	ft_hexstr(unsigned int n, int len, char sign, char *str)
{
	int	i;

	str[len] = 0;
	i = 1;
	while (n != 0)
	{
		str[len - i] = "0123456789ABCDEF"[n % 16];
		n /= 16;
		i++;
	}
	while (i <= len)
	{
		str[len - i] = '0';
		i++;
	}
	if (sign && len)
	{
		str[0] = '0';
		str[1] = 'X';
	}
}

char	*ft_puthex_mayus(t_flags *flags, unsigned int n)
{
	int		len;
	char	*str;

	len = ft_unsiglen(n, 16);
	if (!n)
		flags->hex = 0;
	if (flags->precision >= len)
		len = flags->precision;
	else if (flags->precision < 0 && flags->justified == '0')
	{
		if (flags->hex && flags->width - 2 >= len)
			len = flags->width - 2;
		if (!flags->hex && flags->width >= len)
			len = flags->width;
	}
	if (flags->hex == '#')
		len += 2;
	if (!flags->precision && !n)
		len = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	ft_hexstr(n, len, flags->hex, str);
	return (str);
}
