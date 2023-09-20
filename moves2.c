/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 03:46:19 by kpolatci          #+#    #+#             */
/*   Updated: 2023/08/31 17:47:22 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack	*first;

	if (!(*a) || !((*a)->next))
		return ;
	first = ft_duplicate_first_lst(a);
	ft_del_first_lst(a);
	ft_lstadd_back(a, first);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	t_stack	*first;

	if (!(*b) || !((*b)->next))
		return ;
	first = ft_duplicate_first_lst(b);
	ft_del_first_lst(b);
	ft_lstadd_back(b, first);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_ra(a);
	ft_rb(b);
	write(1, "rr\n", 3);
}
