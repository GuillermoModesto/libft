#include "libft.h"

char	*ft_strlcpy(char *dst, const char *src, int size)
{
	int	i;

	i = 0;
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < (size - 1))
	{
		dst[i] = '\0';
		i++;
	}
	dst[size - 1] = '\0';
	return (dst);
}
