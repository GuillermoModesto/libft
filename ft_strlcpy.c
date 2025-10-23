#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	len;
	int	i;

	if (!src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (i + 1 < dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		if (dstsize > 0)
			dst[i] = '\0';
	}
	return (len);
}
