/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:55:28 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:30 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

t_stack		*ft_get_argv(int argc, char **argv);
t_stack		*ft_process(int argc, char **argv);

t_stack		*ft_lstnew(int nbr);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_del_first_lst(t_stack **lst);
void		ft_del_last_lst(t_stack **lst);

int			ft_lstsize(t_stack *lst);
t_stack		*ft_lastlst(t_stack *lst);
t_stack		*ft_duplicate_first_lst(t_stack **lst);
t_stack		*ft_duplicate_last_lst(t_stack **lst);
void		ft_free_all_lst(t_stack **lst);

int			ft_check_sorted_lst(t_stack *lst);
int			ft_check_dup_lst(t_stack *lst);
int			ft_check_single_number(t_stack *a);

int			ft_min(t_stack *lst);
int			ft_max(t_stack *lst);
int			ft_find_index(t_stack *lst, int number);

void		ft_sa(t_stack **a);
void		ft_sb(t_stack **b);
void		ft_ss(t_stack **a, t_stack **b);
void		ft_pa(t_stack **a, t_stack **b);
void		ft_pb(t_stack **a, t_stack **b);

void		ft_ra(t_stack **a);
void		ft_rb(t_stack **b);
void		ft_rr(t_stack **a, t_stack **b);

void		ft_rra(t_stack **a);
void		ft_rrb(t_stack **b);
void		ft_rrr(t_stack **a, t_stack **b);

void		ft_sort_index(t_stack *lst);
int			ft_max_index(t_stack *lst);
int			ft_max_bit(t_stack *lst);
void		ft_radix_sort(t_stack **a, t_stack **b);

void		ft_find_rotate_type(t_stack **lst, int nbr);
void		ft_sort_small(t_stack **a, t_stack **b);
void		ft_sort_three(t_stack **a);

void		ft_find_rotate_type(t_stack **lst, int nbr);
void		ft_sort_small(t_stack **a, t_stack **b);
void		ft_sort_three(t_stack **a);

int			ft_atoi(char *str);
char		**ft_split(char const *str);
void		ft_free_split(char **argv);
void		ft_print_error(void);
#endif