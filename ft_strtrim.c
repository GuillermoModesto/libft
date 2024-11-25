#include "libft.h"

int	get_start(char const *s1, char const *set)
{
	int	slen;
	int	i;
	int	j;

	slen = ft_strlen(s1);
	i = 0;
	j = 0;
	while ((i < slen) && (set[j] != '\0'))
	{
		j = 0;
		while ((set[j] != '\0') && (s1[i] != set[j]))
			j++;
		i++;
	}
	return (i - 1);
}

int	get_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	i = ft_strlen(s1) - 1;
	j = 0;
	end = 0;
	while ((i >= 0) && (set[j] != '\0'))
	{
		j = 0;
		while ((set[j] != '\0') && (s1[i] != set[j]))
			j++;
		i--;
		end++;
	}
	return (end - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		i;
	char	*new;

	start = get_start(s1, set);
	len = ft_strlen(s1) - start - get_end(s1, set);
	new = (char *) malloc(len * sizeof(char));
	i = 0;
	while (i < len)
	{
		new[i] = s1[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
