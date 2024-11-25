#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size1;
	int		size2;
	char	*new;

	i = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new = (char *) malloc((size1 + size2) * sizeof(char));
	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		new[i] = s2[i - size1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
