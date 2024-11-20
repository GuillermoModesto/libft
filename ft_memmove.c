#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int count)
{
	int		i;
	char	*dest_aux;
	char	*src_aux;

	i = 0;
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	if (dest_aux > src_aux)
	{
		while (i < count)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}
	}
	else
	{
		while (count < i)
		{
			dest_aux[count] = src_aux[count];
			count--;
		}
	}
	return (dest);
}
