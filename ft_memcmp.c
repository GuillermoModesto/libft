#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, int count)
{
	int		i;
	char	*aux_buf1;
	char	*aux_buf2;

	i = 0;
	aux_buf1 = (char *)buf1;
	aux_buf2 = (char *)buf2;
	while (i < count)
	{
		if (aux_buf1[i] != aux_buf2[i])
			return (aux_buf1[i] - aux_buf2[i]);
		i++;
	}
	return (0);
}
