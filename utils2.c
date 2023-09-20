/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:33:05 by kpolatci          #+#    #+#             */
/*   Updated: 2023/08/30 18:29:14 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	whitespaces(char const *str, int *index)
{
	while (str[*index] == ' ' && str[*index])
		*index += 1;
}

static void	pass_word(char const *str, int *index)
{
	while (str[*index] != ' ' && str[*index])
		*index += 1;
}

static int	count_word(char const *str)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	whitespaces(str, &index);
	while (str[index])
	{
		pass_word(str, &index);
		count++;
		whitespaces(str, &index);
	}
	return (count);
}

static char	*sub_str(char const *str, int index)
{
	int		len;
	char	*sub;

	len = 0;
	while (str[index] != ' ' && str[index])
	{
		index++;
		len++;
	}
	index -= len;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	len = 0;
	while (str[index] != ' ' && str[index])
		sub[len++] = str[index++];
	sub[len] = '\0';
	return (sub);
}

char	**ft_split(char const *str)
{
	char	**split;
	int		split_index;
	int		index;

	index = 0;
	split_index = 0;
	split = (char **)malloc(sizeof(char *) * (count_word(str) + 1));
	if (!split)
		return (0);
	whitespaces(str, &index);
	while (str[index])
	{
		split[split_index++] = sub_str(str, index);
		pass_word(str, &index);
		whitespaces(str, &index);
	}
	split[split_index] = 0;
	return (split);
}
