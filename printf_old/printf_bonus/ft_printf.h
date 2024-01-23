/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 05:55:49 by elena             #+#    #+#             */
/*   Updated: 2024/01/21 23:07:36 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_flags
{
    char    justified;
    char    sign;
    char    hex;
    int     width;
    int     precision;
    char    arg;
}           t_flags;

int     ft_printf(char const *str, ...);
int     ft_flags(t_flags *flags, char const *str);
void    ft_printchr(int *len, char c);
void	ft_putarg(int *len, t_flags *flags, va_list args);
void	ft_putchr(t_flags *flags, int *len, char c);
char	*ft_putdec(t_flags *flags, int n);
char	*ft_puthex_mayus(t_flags *flags, unsigned int n);
char	*ft_puthex_minus(t_flags *flags, unsigned int n);
char	*ft_putptr(t_flags *flags, unsigned long int n);
char	*ft_putstr(int pre, char *s);
char	*ft_putuns(t_flags *flags, unsigned int n);

#endif