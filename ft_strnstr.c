/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:02:28 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/01/31 20:12:27 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)haystack;
	ptr2 = (char *)needle;
	i = 0;
	if (ft_strlen(ptr2) == 0)
		return (ptr1);
	if (ft_strlen(ptr1) == 0 || len == 0 || ft_strlen(ptr1) < ft_strlen(ptr2))
		return (NULL);
	while (i <= len)
	{
		if (ft_strncmp(&ptr1[i], ptr2, ft_strlen(ptr2)) == 0)
		{
			if (i + ft_strlen(ptr2) > len)
				return (NULL);
			return (&ptr1[i]);
		}
		i++;
	}
	return (NULL);
}
