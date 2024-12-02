#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					len;
	char				*res;

	i = 0;
	len = ft_strlen(s);
	res = (char *)(malloc((len + 1) * sizeof(char)));
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
