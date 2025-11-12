/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:53:01 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 10:53:04 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*str;

	len = ft_strlen(s);
	str = (char *) malloc(len * sizeof(char) + sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, len + 1);
	return (str);
}
