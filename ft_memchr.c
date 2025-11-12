/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:55:03 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 12:02:45 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t				i;
	const unsigned char	*aux_buf;

	i = 0;
	aux_buf = (const unsigned char *)buf;
	while (i < count)
	{
		if (aux_buf[i] == (unsigned char)c)
			return ((void *)(aux_buf + i));
		i++;
	}
	return ((void *)0);
}
