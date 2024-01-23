#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

static void	ft_printstr(int *len, t_flags *flags, char *str)
{
	int	strlen;
	int	i;

	if (!str)
		return ;
	strlen = ft_strlen(str);
	i = 0;
	while (flags->justified != '-' && i + strlen < flags->width)
	{
		ft_printchr(len, ' ');
		i++;
	}
	i = 0;
	while (str && str[i])
	{
		ft_printchr(len, str[i]);
		i++;
	}
	i = 0;
	while (flags->justified == '-' && i + strlen < flags->width)
	{
		ft_printchr(len, ' ');
		i++;
	}
	free(str);
}

void	ft_putarg(int *len, t_flags *flags, va_list args)
{
	char	*str;

	str = 0;
	if (flags->arg == 'c')
		ft_putchr(flags, len, va_arg(args, int));
	else if (flags->arg == 's')
		str = ft_putstr(flags->precision, va_arg(args, char *));
	else if (flags->arg == 'p')
		str = ft_putptr(flags, va_arg(args, unsigned long int));
	else if (flags->arg == 'd' || flags->arg == 'i')
		str = ft_putdec(flags, va_arg(args, int));
	else if (flags->arg == 'u')
		str = ft_putuns(flags, va_arg(args, unsigned int));
	else if (flags->arg == 'x')
		str = ft_puthex_minus(flags, va_arg(args, unsigned int));
	else if (flags->arg == 'X')
		str = ft_puthex_mayus(flags, va_arg(args, unsigned int));
	else if (flags->arg == '%')
		ft_putchr(flags, len, '%');
	ft_printstr(len, flags, str);
}
