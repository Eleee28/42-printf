#include "ft_printf.h"

void	ft_putchr(t_flags *flags, int *len, char c)
{
	int	i;

	i = 0;
	while (flags->justified != '-' && i + 1 < flags->width)
	{
		ft_printchr(len, ' ');
		i++;
	}
	ft_printchr(len, c);
	i = 0;
	while (flags->justified == '-' && i + 1 < flags->width)
	{
		ft_printchr(len, ' ');
		i++;
	}
}