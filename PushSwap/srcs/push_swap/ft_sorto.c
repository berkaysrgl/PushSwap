/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorto.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:26 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:17 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_o(t_data *data)
{
	int	nbri;

	nbri = find_the_position_number(data->b, data->a->num[data->cheapest]);
	if (data->cheapest == data->a->size - 1
		&& nbri == data->b->size -1
		&& data->cheapest > data->a->size / 2
		&& nbri > data->b->size / 2)
	{
		rrr(data);
		data->cheapest = 0;
	}
	else if (data->cheapest == data->a->size - 1
		&& nbri != data->b->size - 1
		&& data->cheapest > data->a->size / 2)
	{
		rra(data, 1);
		data->cheapest = 0;
	}
	else if (nbri == data->b->size - 1
		&& nbri > data->b->size / 2)
		rrb(data, 1);
}

void	ft_rotate_o2(t_data *data)
{
	int	nbri;

	nbri = find_the_position_number(data->b, data->a->num[data->cheapest]);
	if (data->cheapest > 0 && nbri > 0
		&& data->cheapest <= data->a->size / 2
		&& nbri <= data->b->size / 2)
	{
		rr(data);
		data->cheapest--;
	}
	else if (data->cheapest > 0 && nbri == 0
		&& data->cheapest <= data->a->size / 2)
	{
		ra(data, 1);
		data->cheapest--;
	}
	else if (data->cheapest == 0 && nbri > 0
		&& nbri <= data->b->size / 2)
		rb(data, 1);
}

void	ft_rotate_o3(t_data *data)
{
	int	nbri;

	nbri = find_the_position_number(data->b, data->a->num[data->cheapest]);
	if (data->cheapest < data->a->size - 1
		&& nbri < data->b->size - 1
		&& data->cheapest > data->a->size / 2
		&& nbri > data->b->size / 2)
	{
		rrr(data);
		data->cheapest++;
	}
	else if (data->cheapest < data->a->size - 1
		&& data->cheapest > data->a->size / 2)
	{
		rra(data, 1);
		data->cheapest++;
	}
	else if (nbri < data->b->size - 1
		&& nbri > data->b->size / 2)
		rrb(data, 1);
}
