/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:52 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:27 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data, int rule)
{
	int	i;
	int	tmp;
	int	first_nb;

	i = 0;
	first_nb = data->a->num[0];
	while (i < data->a->size)
	{
		tmp = data->a->num[i];
		data->a->num[i] = data->a->num[i + 1];
		data->a->num[i + 1] = tmp;
		i++;
	}
	data->a->num[data->a->size - 1] = first_nb;
	if (rule == 1)
		write(1, "ra\n", 3);
}

void	rb(t_data *data, int rule)
{
	int	i;
	int	tmp;
	int	first_nb;

	i = 0;
	first_nb = data->b->num[0];
	while (i < data->b->size)
	{
		tmp = data->b->num[i];
		data->b->num[i] = data->b->num[i + 1];
		data->b->num[i + 1] = tmp;
		i++;
	}
	data->b->num[data->b->size - 1] = first_nb;
	if (rule == 1)
		write(1, "rb\n", 3);
}

void	rr(t_data *data)
{
	ra(data, 0);
	rb(data, 0);
	write(1, "rr\n", 3);
}
