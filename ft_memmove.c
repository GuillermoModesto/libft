/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:00:49 by guantino          #+#    #+#             */
/*   Updated: 2025/11/10 11:00:52 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int count)
{
	int		i;
	char	*dest_aux;
	char	*src_aux;

	if (!dest && !src)
		return (NULL);
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	if (dest_aux > src_aux)
	{
		i = count;
		while (i--)
			dest_aux[i] = src_aux[i];
	}
	else
	{
		i = 0;
		while (i < count)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}
	}
	return (dest);
}
