/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 04:01:38 by kpolatci          #+#    #+#             */
/*   Updated: 2023/08/31 17:47:51 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a)
{
	t_stack	*last;

	if (!(*a) || !((*a)->next))
		return ;
	last = ft_duplicate_last_lst(a);
	ft_del_last_lst(a);
	ft_lstadd_front(a, last);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	t_stack	*last;

	if (!(*b) || !((*b)->next))
		return ;
	last = ft_duplicate_last_lst(b);
	ft_del_last_lst(b);
	ft_lstadd_front(b, last);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rra(a);
	ft_rrb(b);
	write(1, "rrr\n", 4);
}
