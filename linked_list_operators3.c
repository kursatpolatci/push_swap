/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_operators3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:10:15 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/04 14:36:37 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted_lst(t_stack *lst)
{
	if (lst->next == NULL)
		return (1);
	while (lst->next != NULL)
	{
		if ((lst->number) > (lst->next->number))
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_check_dup_lst(t_stack *lst)
{
	t_stack	*temp;

	if (lst->next == NULL)
		return (0);
	while (lst->next != NULL)
	{
		temp = lst->next;
		while (temp != NULL)
		{
			if (lst->number == temp->number)
				return (1);
			temp = temp ->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	ft_check_single_number(t_stack *a)
{
	if (a -> next == NULL)
		return (1);
	return (0);
}
