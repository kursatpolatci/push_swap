/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:04:16 by kpolatci          #+#    #+#             */
/*   Updated: 2023/09/12 15:32:57 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	whitespaces(char *str, int *index, int *sign)
{
	*index = 0;
	*sign = 1;
	while ((str[*index] >= 9 && str[*index] <= 13)
		|| str[*index] == 32)
		*index += 1;
	if (str[*index] == 43 || str[*index] == 45)
	{
		if (str[*index] == 45)
			*sign = -1;
		*index += 1;
	}
}

int	ft_atoi(char *str)
{
	long	result;
	int		sign;
	int		index;

	result = 0;
	whitespaces(str, &index, &sign);
	if (!str[index])
		ft_print_error();
	while (str[index])
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			ft_print_error();
		result = (result * 10) + (str[index] - '0');
		if (result > 2147483647 || result < -2147483648)
			ft_print_error();
		index++;
	}
	return (result * sign);
}
