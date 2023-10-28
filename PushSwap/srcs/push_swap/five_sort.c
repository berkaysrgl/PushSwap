/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:06 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:09 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_data *data)
{
	if (data->a->num[0] < data->a->num[1])
	{
		if (data->a->num[0] > data->a->num[2])
			rra(data, 1);
		else
		{
			rra(data, 1);
			sa(data, 1);
		}
	}
	else
	{
		if (data->a->num[0] < data->a->num[2])
			sa(data, 1);
		else if (data->a->num[1] < data->a->num[2])
			ra(data, 1);
		else
		{
			sa(data, 1);
			if (data->a->size != 2)
				rra(data, 1);
		}
	}
}

void	five_sort(t_data *data)
{
	while (data->a->size > 3)
	{
		min_stack(data->a);
		if (data->a->mini == 0)
			pb(data);
		if (data->a->mini < data->a->size / 2)
			ra(data, 1);
		else
			rra(data, 1);
	}
	if (!is_sorted(data->a))
		three_sort(data);
	while (data->b->size > 0)
		pa(data);
}
