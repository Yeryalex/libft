/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:48:14 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/02/20 23:52:50 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	ft_counterword(const char *str, char c)
{
	int	i;
	int	trigger;

	if (!str)
		return (0);
	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ft_word_splitter(char const *s1, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = s1[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static void	*free_me(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((ft_counterword(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i++ <= ft_strlen(s))
	{
		if (s[i - 1] != c && index < 0)
			index = i - 1;
		else if ((s[i - 1] == c || (i - 1) == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_word_splitter(s, index, i - 1);
			if (!split[j - 1])
				return (free_me(split));
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
