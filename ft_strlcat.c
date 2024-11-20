#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dst[len] != '\0')
		len++;
	while ((src[i] != '\0') && (i < size))
	{
		dst[len+i] = src[i];
		i++;
	}
	dst[size+i] = '\0';
	return (dst);
}
