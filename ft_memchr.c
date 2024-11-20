#include "libft.h"

void	*ft_memchr(const void *buf, int c, int count)
{
	int		i;
	char	*aux_buf;

	i = 0;
	aux_buf = (char *)buf;
	while (i < count)
	{
		if (aux_buf[i] == c)
			return (aux_buf + i);
		i++;
	}
	return (0);
}
