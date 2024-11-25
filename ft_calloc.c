#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int nelem, int elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nelem * elsize));
	return (ptr);
}
