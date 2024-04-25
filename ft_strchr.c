/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:57:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/03/26 20:36:07 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	if (ptr[i] == '\0' && (char)c == '\0')
		return (&ptr[i]);
	while (ptr[i] != (char)c)
	{
		if (!ptr[i])
			return (0);
		i++;
	}
	return (&ptr[i]);
}

int main()
{
	printf("%s\n", ft_strchr("hola", 66));
	return (0);
}
