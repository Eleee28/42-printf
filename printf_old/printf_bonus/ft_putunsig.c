#include "ft_printf.h"

static int	ft_unslen(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_unsstr(unsigned int n, int len, char *str)
{
	int	i;

	str[len] = 0;
	i = 1;
	while (n != 0)
	{
		str[len - i] = "0123456789"[n % 10];
		n /= 10;
		i++;
	}
	while (i <= len)
	{
		str[len - i] = '0';
		i++;
	}
}

char	*ft_putuns(t_flags *flags, unsigned int n)
{
	int		len;
	char	*str;

	len = ft_unslen(n);
	if (!flags->precision && !n)
		len = 0;
	else if (flags->precision >= len)
		len = flags->precision;
	if (flags->precision < 0 && flags->justified == '0' && flags->width >= len)
		len = flags->width;
	str = (char *)malloc((len + 1) * sizeof(char));
	ft_unsstr(n, len, str);
	return (str);
}