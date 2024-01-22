#include "ft_printf.h"

static int  ft_atoi(const char *nptr)   // atoi function check with mine
{
    int s;
    int n;
    int i;

    s = 1;
    n = 0;
    i = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)      // this is in ascii (change)
        i++;
    if (nptr[i] == 43 || nptr[i] == 45)
    {
        if (nptr[i] == 45)
            s = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (s * n);
}

static int	ft_widlen(t_flags *flags, char const *str) // change name to ft_wid_pre
{
	int	i;

	i = 0;
	flags->width = ft_atoi(&str[i]);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '.')
	{
		i++;
		flags->precision = ft_atoi(&str[i]);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	else
		flags->precision = -1;
	flags->arg = str[i];
	return (i);
}

int	ft_flags(t_flags *flags, char const *str)
{
	int	i;

	flags->justified = 0;
	flags->sign = 0;
	flags->hex = 0;
	i = 1;
	while (str[i] == '-' || str[i] == '0' || str[i] == '+'
		|| str[i] == '#' || str[i] == ' ')
	{
		if (str[i] == '-')
			flags->justified = '-';
		else if (str[i] == '0' && flags->justified != '-')
			flags->justified = '0';
		else if (str[i] == '+')
			flags->sign = '+';
		else if (str[i] == ' ' && flags->sign != '+')
			flags->sign = ' ';
		else if (str[i] == '#')
			flags->hex = '#';
		i++;
	}
	i += ft_widlen(flags, &str[i]);
	return (i);
}
