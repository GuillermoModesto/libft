/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:56:49 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 12:01:56 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t				i;
	const unsigned char	*aux_buf1;
	const unsigned char	*aux_buf2;

	i = 0;
	aux_buf1 = (const unsigned char *)buf1;
	aux_buf2 = (const unsigned char *)buf2;
	while (i < count)
	{
		if (aux_buf1[i] != aux_buf2[i])
			return (aux_buf1[i] - aux_buf2[i]);
		i++;
	}
	return (0);
}
