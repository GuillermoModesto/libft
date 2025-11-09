#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)s;
	while (i < n)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
