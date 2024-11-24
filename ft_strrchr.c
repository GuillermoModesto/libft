#include "libft.h"

char	*ft_strrchr(const char *buf, int c)
{
	int	i;

	i = ft_strlen((char *)buf);
	while (i >= 0)
	{
		if (buf[i] == c)
			return ((char *)(buf + i));
		i--;
	}
	return (0);
}
