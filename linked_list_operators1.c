/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_operators1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:58:41 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 16:37:56 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> number = nbr;
	new -> next = NULL;
	return (new);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new -> next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*iter;

	iter = *lst;
	if ((*lst) == NULL)
	{
		(*lst) = new;
		return ;
	}
	while (iter -> next != NULL)
		iter = iter -> next;
	iter -> next = new;
	iter -> next -> next = NULL;
}

void	ft_del_first_lst(t_stack **lst)
{
	t_stack	*temp;

	if (!(*lst) || !lst)
		return ;
	temp = (*lst);
	(*lst) = (*lst)->next;
	free(temp);
}

void	ft_del_last_lst(t_stack **lst)
{
	t_stack	*temp1;
	t_stack	*temp2;

	if (!(*lst) || !lst)
		return ;
	if ((*lst)->next == NULL)
	{
		free(*lst);
		return ;
	}
	temp1 = (*lst);
	while (temp1 -> next -> next != NULL)
		temp1 = temp1 -> next;
	temp2 = temp1 -> next;
	temp1 -> next = NULL;
	free(temp2);
}
