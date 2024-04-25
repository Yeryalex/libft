/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:45:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/02/20 23:05:14 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	result = ptr;
	while (*s)
	{
		*ptr = f(i, *s);
		ptr++;
		i++;
		s++;
	}
	*ptr = '\0';
	return (result);
}
