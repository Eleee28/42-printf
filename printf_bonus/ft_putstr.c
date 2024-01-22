#include "ft_printf.h"

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	ft_strstr(char *s, int len, char *str)
{
	int	i;

	i = 0;
	while (s[i] && i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
}

char	*ft_putstr(int pre, char *s)
{
	int		len;
	char	*str;

	if (!s)
		str = ft_putstr(pre, "(null)");
	else
	{
		len = ft_strlen(s);
		if (pre >= 0 && pre <= len)
			len = pre;
		str = (char *)malloc((len + 1) * sizeof(char));
		ft_strstr(s, len, str);
	}
	return (str);
}