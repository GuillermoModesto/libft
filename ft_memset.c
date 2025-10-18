#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	return (s);
}
