/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:41:52 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 16:42:46 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_index(t_stack *lst)
{
	t_stack	*iter;
	t_stack	*temp;
	int		index_count;

	temp = lst;
	while (lst != NULL)
	{
		iter = temp;
		index_count = 0;
		while (iter != NULL)
		{
			if (lst->number > iter->number)
				index_count++;
			iter = iter->next;
		}
		lst->index = index_count;
		lst = lst->next;
	}
}

int	ft_max_index(t_stack *lst)
{
	int	max_index;

	max_index = lst->index;
	while (lst != NULL)
	{
		if (max_index < lst->index)
			max_index = lst->index;
		lst = lst->next;
	}
	return (max_index);
}

int	ft_max_bit(t_stack *lst)
{
	int	max_bit;
	int	max_index;

	max_index = ft_max_index(lst);
	max_bit = 0;
	while ((max_index >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	ft_radix_sort(t_stack **a, t_stack **b)
{
	int	stack_size;
	int	max_bit;
	int	i;
	int	j;

	stack_size = ft_lstsize((*a));
	max_bit = ft_max_bit((*a));
	i = 0;
	j = 0;
	while (i < max_bit)
	{
		while (j < stack_size)
		{
			if (((*a)->index >> i) & 1)
				ft_ra(a);
			else
				ft_pb(a, b);
			j++;
		}
		i++;
		j = 0;
		while (ft_lstsize(*b) > 0)
			ft_pa(a, b);
	}
}
