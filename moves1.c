/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:28:49 by marvin            #+#    #+#             */
/*   Updated: 2023/08/29 01:28:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack	*temp;

	if (!(*a) || !((*a)->next))
		return ;
	temp = (*a)->next;
	(*a)->next = (*a)->next->next;
	temp->next = (*a);
	(*a) = temp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b)
{
	t_stack	*temp;

	if (!(*b) || !((*b)->next))
		return ;
	temp = (*b)->next;
	(*b)->next = (*b)->next->next;
	temp->next = (*b);
	(*b) = temp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_sa(a);
	ft_sb(b);
	write(1, "ss\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b)
{
	if ((*b) == NULL)
		return ;
	ft_lstadd_front(a, ft_duplicate_first_lst(b));
	ft_del_first_lst(b);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b)
{
	if ((*a) == NULL)
		return ;
	ft_lstadd_front(b, ft_duplicate_first_lst(a));
	ft_del_first_lst(a);
	write(1, "pb\n", 3);
}
