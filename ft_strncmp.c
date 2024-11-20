#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, int count)
{
	int	i;
	int	n;

	i = 0;
	while (i < count)
	{
		n = str1[i] - str2[i];
		if (n != 0)
			return (n);
		i++;
	}
	return (n);
}
