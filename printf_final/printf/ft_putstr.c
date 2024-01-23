/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:34:02 by elena             #+#    #+#             */
/*   Updated: 2023/10/31 14:47:27 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
