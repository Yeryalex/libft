/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:40:16 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/01/24 17:46:27 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptrdest;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *)src;
	ptrdest = (unsigned char *)dst;
	i = 0;
	if (ptrdest > ptr)
	{
		while (len-- > 0)
			ptrdest[len] = ptr[len];
	}
	else
	{
		while (i < len)
		{
			ptrdest[i] = ptr[i];
			i++;
		}
	}
	return (dst);
}
