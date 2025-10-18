#include "libft.h"

char	*ft_strchr(const char *buf, int c)
{
	int	i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == c)
			return ((char *)(buf + i));
		i++;
	}
	return ((void *)0);
}
