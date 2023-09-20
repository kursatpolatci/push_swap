/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:07:06 by marvin            #+#    #+#             */
/*   Updated: 2023/08/29 01:07:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_process(argc, argv);
	b = NULL;
	ft_sort_index(a);
	if (ft_lstsize(a) < 6)
		ft_sort_small(&a, &b);
	else
		ft_radix_sort(&a, &b);
	ft_free_all_lst(&a);
}
