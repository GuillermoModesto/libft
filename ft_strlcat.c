#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	while ((src[i] != '\0') && (i < size))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (dst);
}
