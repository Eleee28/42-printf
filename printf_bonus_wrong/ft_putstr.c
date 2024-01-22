/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:38:56 by ejuarros          #+#    #+#             */
/*   Updated: 2024/01/22 10:43:50 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** @brief Copy len characters of s into str
 * 
 *  @param s string to copy
 *  @param len length of s to copy
 *  @param str string that stores the copy
 * 
 *  @return void
*/
static void	ft_strstr(char *s, int len, char *str)
{
	int	i;

	i = 0;
	while (s[i] && i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
}

/** @brief Prints a string
 * 
 *  @details If s is not NULL, its length will be the minimum between 
 *  strlen(s) and precision. Allocate memory (len chars). 
 * 
 *  @param precision flag precision
 *  @param s string to print
 * 
 *  @return string to print taking into account the precision
*/
char	*ft_putstr(int precision, char *s)
{
	int		len;
	char	*str;

	if (!s)
		str = ft_putstr(precision, "(null)");
	else
	{
		len = ft_strlen(s);
		if (precision >= 0 && precision <= len)
			len = precision;
		str = (char *)malloc((len + 1) * sizeof(char));
		ft_strstr(s, len, str);
	}
	return (str);
}
