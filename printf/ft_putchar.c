/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:08 by elena             #+#    #+#             */
/*   Updated: 2024/01/24 08:31:15 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

/** @brief Prints a character
 * 
 *  @param c character to print
 * 
 *  @retval 1
 *  @details the length of a charcter is always 1
*/
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
