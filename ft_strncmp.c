#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if ((str1[i] - str2[i]) != 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
