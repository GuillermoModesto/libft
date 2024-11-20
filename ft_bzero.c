#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (i < n)
		aux[i] = '\0';
}
