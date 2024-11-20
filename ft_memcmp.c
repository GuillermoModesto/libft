#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, int count)
{
	int		i;
	int		n;
	char	*aux_buf1;
	char	*aux_buf2;

	i = 0;
	n = 0;
	aux_buf1 = (char *)buf1;
	aux_buf2 = (char *)buf2;
	while (i < count)
	{
		n = aux_buf1[i] - aux_buf2[i];
		if (n != 0)
			return (n);
		i++;
	}
	return (n);
}
