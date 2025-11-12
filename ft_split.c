/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:15:38 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 13:01:24 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n);
}

static char	*substr_dumpy(const char *s, size_t start, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[len] = '\0';
	return (p);
}

static void	*mega_free(char **out, size_t k)
{
	while (k > 0)
		free(out[--k]);
	free(out);
	return (NULL);
}

static void	catch_words(size_t *i, size_t *start, char c, const char *s)
{
	while (s[*i] && s[*i] == c)
		*i += 1;
	*start = *i;
	while (s[*i] && s[*i] != c)
		*i += 1;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	k;
	char	**out;

	if (!s)
		return (NULL);
	out = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		catch_words(&i, &start, c, s);
		if (i > start)
		{
			out[k] = substr_dumpy(s, start, i - start);
			if (!out[k])
				return (mega_free(out, k));
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}
