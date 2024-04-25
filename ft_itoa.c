/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:39:07 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/02/20 23:03:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_digitlen(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	int_to_char(char *ptr, int size, int start_position, int n)
{
	while (size > start_position)
	{
		ptr[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	size;
	size_t	start_position;

	size = ft_digitlen(n);
	start_position = 0;
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (0);
	if (n == -2147483648)
	{
		ptr[0] = '-';
		ptr[1] = '2';
		start_position = 2;
		n = 147483648;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		start_position = 1;
		n = -n;
	}
	int_to_char(ptr, size, start_position, n);
	ptr[size] = '\0';
	return (ptr);
}
