#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t		i;
	char	*dest_aux;
	char	*src_aux;

	if (!dst && !src)
		return (NULL);
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	if (dest_aux > src_aux)
	{
		i = count;
		while (i--)
			dest_aux[i] = src_aux[i];
	}
	else
	{
		i = 0;
		while (i < count)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}
	}
	return (dest);
}
