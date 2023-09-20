/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:49:12 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 16:45:29 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_rotate_type(t_stack **lst, int nbr)
{
	while (ft_find_index((*lst), nbr) != 0)
	{
		if (ft_find_index((*lst), nbr) < ft_lstsize((*lst)) / 2)
			ft_ra(lst);
		else
			ft_rra(lst);
	}
}

void	ft_sort_small(t_stack **a, t_stack **b)
{
	int	min;

	while (ft_lstsize((*a)) > 3)
	{
		min = ft_min((*a));
		while (ft_find_index((*a), min) != 0)
			ft_find_rotate_type(a, min);
		ft_pb(a, b);
	}
	if (ft_check_sorted_lst((*a)) == 0)
		ft_sort_three(a);
	while (ft_lstsize(*b) > 0)
		ft_pa(a, b);
}

void	ft_sort_three(t_stack **a)
{
	if (ft_min((*a)) == (*a)->number)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (ft_max(*a) == (*a)->number)
	{
		ft_ra(a);
		if (ft_check_sorted_lst((*a)) == 0)
			ft_sa(a);
	}
	else
	{
		if (ft_find_index((*a), ft_max((*a))) == 1)
			ft_rra(a);
		else
			ft_sa(a);
	}
}
