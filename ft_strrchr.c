/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:38:19 by guantino          #+#    #+#             */
/*   Updated: 2025/11/17 12:28:46 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *buf, int c)
{
	int				i;
	unsigned char	*b;
	unsigned char	ch;

	i = ft_strlen(buf);
	b = (unsigned char *)buf;
	ch = (unsigned char)c;
	while (i >= 0)
	{
		if (b[i] == ch)
			return ((char *)(buf + i));
		i--;
	}
	return ((void *)0);
}
