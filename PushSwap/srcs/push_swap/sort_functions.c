/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:42 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:23 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data)
{
	int	tmp;

	tmp = data->b->num[0];
	rb(data, 0);
	data->b->size--;
	data->a->size++;
	if (data->a->size > 1)
		rra(data, 0);
	data->a->num[0] = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	int	tmp;

	tmp = data->a->num[0];
	ra(data, 0);
	data->a->size--;
	data->b->size++;
	if (data->b->size > 1)
		rrb(data, 0);
	data->b->num[0] = tmp;
	write(1, "pb\n", 3);
}

void	rra(t_data *data, int rule)
{
	int	i;
	int	tmp;

	tmp = data->a->num[data->a->size - 1];
	i = data->a->size - 1;
	while (0 < i)
	{
		data->a->num[i] = data->a->num[i - 1];
		i--;
	}
	data->a->num[0] = tmp;
	if (rule == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_data *data, int rule)
{
	int	i;
	int	tmp;

	tmp = data->b->num[data->b->size - 1];
	i = data->b->size - 1;
	while (0 < i)
	{
		data->b->num[i] = data->b->num[i - 1];
		i--;
	}
	data->b->num[0] = tmp;
	if (rule == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	write(1, "rrr\n", 4);
}
