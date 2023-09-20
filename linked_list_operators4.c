/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_operators4.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:06:05 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:23 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *lst)
{
	int	min_number;

	min_number = lst->number;
	while (lst != NULL)
	{
		if (min_number > lst->number)
			min_number = lst->number;
		lst = lst->next;
	}
	return (min_number);
}

int	ft_max(t_stack *lst)
{
	int	max_number;

	max_number = lst->number;
	while (lst != NULL)
	{
		if (max_number < lst->number)
			max_number = lst->number;
		lst = lst->next;
	}
	return (max_number);
}

int	ft_find_index(t_stack *lst, int number)
{
	int	index;

	index = 0;
	while (lst != NULL)
	{
		if (lst->number == number)
			return (index);
		index++;
		lst = lst->next;
	}
	return (index);
}
