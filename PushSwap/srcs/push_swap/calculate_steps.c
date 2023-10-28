/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_steps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:01 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:07 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_steps_m(t_data *data, int i)
{
	if (max_stack(data->b) <= data->b->size / 2)
	{
		if (i <= data->a->size / 2)
		{
			if (max_stack(data->b) <= i)
				data->steps[i] = i;
			else
				data->steps[i] = max_stack(data->b);
		}
		else
			data->steps[i] += max_stack(data->b);
	}
	else if (max_stack(data->b) > data->b->size / 2)
		data->steps[i] += data->b->size - max_stack(data->b);
}

void	calculate_steps_o(t_data *data, int i)
{
	int	position;
	int	j;

	j = 0;
	position = find_the_position_number(data->b, data->a->num[i]);
	if (position <= data->b->size / 2)
	{
		if (i <= data->a->size / 2)
		{
			if (position <= i)
				data->steps[i] = i;
			else
				data->steps[i] = position;
		}
		else
			data->steps[i] += position;
	}
	else if (position > data->b->size / 2)
		data->steps[i] += data->b->size - position;
}

void	find_cheapest(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->a->size)
	{
		if (i <= data->a->size / 2)
			data->steps[i] = i;
		else if (i > data->a->size / 2)
			data->steps[i] = (data->a->size - i);
		if (data->a->num[i] < data->b->num[min_stack(data->b)])
			calculate_steps_m(data, i);
		else
			calculate_steps_o(data, i);
		data->steps[i] += 1;
	}
	take_cheapest(data);
}
