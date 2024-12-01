#include "libft.h"

int	ft_get_size(int n)
{
	int	amount;

	amount = 0;
	if (n < 0)
		amount++;
	while (n != 0)
	{
		n /= 10;
		amount++;
	}
	return (amount);
}

int	ft_get_unit(int size, int n)
{
	int	unit;
	int	i;

	unit = 1;
	i = 0;
	if (n < 0)
		i++;
	while (i < size - 1)
	{
		unit *= 10;
		i++;
	}
	return (unit);
}

void	ft_check_sign(int *n, int *i, char *res)
{
	if (*n < 0)
	{
		res[0] = '-';
		*i = *i + 1;
		*n *= (-1);
	}
}

char	*ft_itoa(int n)
{
	int		size;
	int		i;
	int		unit;
	char	*res;

	i = 0;
	size = ft_get_size(n);
	unit = ft_get_unit(size, n);
	res = (char *)(malloc((size + 1) * sizeof(char)));
	if (res == NULL)
		return (NULL);
	ft_check_sign(&n, &i, res);
	while (i < size)
	{
		res[i] = (n / unit) + '0';
		n %= unit;
		unit /= 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}
