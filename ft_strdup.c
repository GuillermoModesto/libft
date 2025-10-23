#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*str;

	len = ft_strlen(s);
	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, len + 1);
	return (str);
}
