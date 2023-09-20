/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:29:54 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 18:05:40 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_get_argv(int argc, char **argv)
{
	t_stack		*a;
	char		**split;
	int			split_index;
	int			index;

	index = 1;
	split_index = 0;
	a = NULL;
	while (index < argc)
	{
		split = ft_split(argv[index]);
		while (split[split_index])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(split[split_index])));
			split_index++;
		}
		ft_free_split(split);
		split_index = 0;
		index++;
	}
	if (ft_lstsize(a) == 0)
		ft_print_error();
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		exit(1);
	else
		a = ft_get_argv(argc, argv);
	if (!a)
		return (0);
	if (ft_check_single_number(a) == 1)
	{
		ft_free_all_lst(&a);
		exit(1);
	}
	if (ft_check_dup_lst(a) == 1)
	{
		ft_free_all_lst(&a);
		ft_print_error();
	}
	if (ft_check_sorted_lst(a) == 1)
	{
		ft_free_all_lst(&a);
		exit(1);
	}
	return (a);
}
