#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int count)
{
	int		i;
	char	*dest_aux;
	char	*src_aux;

	i = 0;
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	while (i < count)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	return (dest);
}
