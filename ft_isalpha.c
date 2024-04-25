/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:02:43 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/01/23 19:30:56 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	while (c >= 97 && c <= 122)
		return (1);
	return (0);
}

static int	ft_isupper(int c)
{
	while (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) != 0 || ft_isupper(c) != 0)
		return (1);
	return (0);
}
