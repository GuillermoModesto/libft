#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		size;
	char		*new;

	i = 0;
	size = ft_strlen(ft_strrchr(s, s[start]));
	new = (char *) malloc(size * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (size < len)
		len = size;
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
