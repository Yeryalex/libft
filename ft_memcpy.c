/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:27:59 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/01/24 19:49:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptrdest;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *)src;
	ptrdest = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ptrdest[i] = ptr[i];
		i++;
	}
	return (dst);
}
