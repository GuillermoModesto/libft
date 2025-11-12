/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:38:19 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 10:38:21 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *buf, int c)
{
	int	i;

	i = ft_strlen(buf);
	while (i >= 0)
	{
		if (buf[i] == c)
			return ((char *)(buf + i));
		i--;
	}
	return ((void *)0);
}
