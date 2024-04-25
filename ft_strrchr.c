/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:22:10 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/01/26 20:35:04 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*ptr;

	j = 0;
	ptr = (char *)s;
	i = ft_strlen(ptr);
	while (ptr[j] != (char)c)
	{
		if (!ptr[j])
			return (0);
		j++;
	}
	while (ptr[i] != (char)c)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i--;
	}
	return (&ptr[i]);
}
