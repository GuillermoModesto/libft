#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int		i;
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
