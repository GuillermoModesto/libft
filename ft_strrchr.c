#include "libft.h"

char	*ft_strrchr(const char *buf, int c)
{
	int	i;

	i = ft_strlen(buf);
	while (i--)
	{
		if (buf[i] == c)
			return ((char *)(buf + i));
	}
	return ((void *)0);
}
