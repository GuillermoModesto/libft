#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t		i;
	unsigned char	*dest_aux;
	const unsigned char	*src_aux;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dest_aux = (unsigned char *)dest;
	src_aux = (const unsigned char *)src;
	while (i < count)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	return (dest);
}
