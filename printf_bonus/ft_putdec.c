#include "ft_printf.h"

static int	ft_nbrlen(int n)
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

static void	ft_nbrstr(int n, int len, char sign, char *str)
{
	int	i;

	str[len] = 0;
	i = 1;
	while (n != 0)
	{
		if (n < 0)
			str[len - i] = "0123456789"[-(n % 10)];
		else
			str[len - i] = "0123456789"[n % 10];
		n /= 10;
		i++;
	}
	while (i <= len)
	{
		str[len - i] = '0';
		i++;
	}
	if (sign)
		str[0] = sign;
}

char	*ft_putdec(t_flags *flags, int n)
{
	int		len;
	char	*str;

	if (n < 0)
		flags->sign = '-';
	len = ft_nbrlen(n);
	if (!flags->precision && !n)
		len = 0;
	else if (flags->precision >= len)
		len = flags->precision;
	else if (flags->precision < 0 && flags->justified == '0')
	{
		if (flags->sign && flags->width - 1 >= len)
			len = flags->width - 1;
		if (!flags->sign && flags->width >= len)
			len = flags->width;
	}
	if (flags->sign)
		len += 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	ft_nbrstr(n, len, flags->sign, str);
	return (str);
}