/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:22:18 by elena             #+#    #+#             */
/*   Updated: 2023/11/13 22:03:18 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(char *str);
int		ft_putnbr(int n);
int		ft_putunsig(size_t n);
int		ft_puthex(size_t n, char c);
int		ft_putptr(size_t ptr);
int		count_digits(size_t n, int numDig);
int		count_signed(int n, int numDig);
int		ft_putargs(va_list args, int i, const char *str);
int		ft_puthex_nbr(size_t n, char *base);
int		ft_puthex_ptr(size_t ptr);

#endif