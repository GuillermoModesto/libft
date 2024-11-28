#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

char	*create_space_word(char const *s, int start, int end)
{
	int		i;
	char	*word;

	i = start;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < end)
	{
		word[i - start] = s[i];
		i++;
	}
	word[end - start] = '\0';
	return (word);
}

void	*fill_words(char **mt, char const *s, char c)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (j < i)
		{
			mt[size] = create_space_word(s, j, i);
			if (mt[size] == NULL)
				return (NULL);
			size++;
		}
	}
	mt[size] = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**mt;

	if (s == NULL)
		return (NULL);
	size = count_words(s, c);
	mt = (char **)malloc((size + 1) * sizeof(char *));
	if (mt == NULL)
		return (NULL);
	fill_words(mt, s, c);
	return (mt);
}
