#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		z;
	int		size;
	char	*aux;
	char	**mt;

	i = 0;
	j = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			size++;
		i++;
	}
	size += 2;
	mt = (char **) malloc(size * sizeof(char *));
	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		aux = (char *) malloc((i - j + 1) * sizeof(char *));
		i++;
		if (aux == NULL)
			return (NULL);
		z = 0;
		while (j < (i - 1))
		{
			aux[z] = s[j];
			j++;
			z++;
		}
		aux[z] = '\0';
		mt[size] = aux;
		size++;
		j++;
	}
	mt[size] = NULL;
	return (mt);
}
