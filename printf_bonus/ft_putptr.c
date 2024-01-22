#include "ft_printf.h"

static int	ft_ptrlen(unsigned long int n)
{
	int	i;

	i = 1;
	while (n / 16 != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static void	ft_ptrstr(unsigned long int n, int len, char sign, char *str)
{
	int	i;

	str[len] = 0;
	i = 1;
	while (n != 0)
	{
		str[len - i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i++;
	}
	if (sign)
	{
		str[0] = sign;
		str[1] = '0';
		str[2] = 'x';
	}
	else
	{
		str[0] = '0';
		str[1] = 'x';
	}
}

char	*ft_putptr(t_flags *flags, unsigned long int n)
{
	int		len;
	char	*str;

	if (!n)
		str = ft_putstr(-1, "0x0");
	else
	{
		len = ft_ptrlen(n) + 2;
		if (flags->sign)
			len++;
		str = (char *)malloc((len + 1) * sizeof(char));
		ft_ptrstr(n, len, flags->sign, str);
	}
	return (str);
}