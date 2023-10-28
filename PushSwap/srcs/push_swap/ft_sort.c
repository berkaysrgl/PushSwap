/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:15 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:14 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_sort(t_data *data)
{
	ft_rotate_m(data);
	ft_rotate_m2(data);
	ft_rotate_m3(data);
}

void	ft_sort(t_data *data)
{
	ft_rotate_o(data);
	ft_rotate_o2(data);
	ft_rotate_o3(data);
}

void	ft_start(t_data *data)
{
	if (data->a->num[data->cheapest] < data->b->num[min_stack(data->b)])
	{
		while (1)
		{
			if (data->cheapest == 0 && max_stack(data->b) == 0)
				break ;
			ft_min_sort(data);
		}
	}
	else
	{
		while (1)
		{
			if (data->cheapest == 0
				&& find_the_position_number(data->b,
					data->a->num[data->cheapest]) == 0)
				break ;
			ft_sort(data);
		}
	}
	pb(data);
}
