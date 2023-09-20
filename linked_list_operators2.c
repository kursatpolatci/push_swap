/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_operators2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 03:28:10 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 16:52:22 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (size);
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_stack	*ft_lastlst(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

t_stack	*ft_duplicate_first_lst(t_stack **lst)
{
	t_stack	*new;

	if ((*lst) == NULL || lst == NULL)
		return (NULL);
	new = (t_stack *)malloc(sizeof(t_stack));
	new->number = (*lst)->number;
	new->index = (*lst)->index;
	new->next = NULL;
	return (new);
}

t_stack	*ft_duplicate_last_lst(t_stack **lst)
{
	t_stack	*new;

	if ((*lst) == NULL || lst == NULL)
		return (NULL);
	new = (t_stack *)malloc(sizeof(t_stack));
	new->number = ft_lastlst((*lst))->number;
	new->index = ft_lastlst((*lst))->index;
	new->next = NULL;
	return (new);
}

void	ft_free_all_lst(t_stack **lst)
{
	t_stack	*temp;

	if (!(*lst))
		return ;
	while ((*lst))
	{
		temp = (*lst);
		(*lst) = (*lst)->next;
		free(temp);
	}
}
