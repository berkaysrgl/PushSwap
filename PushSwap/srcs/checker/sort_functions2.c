/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:23:47 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:30:08 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_data *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->a->num[0];
	data->a->num[0] = data->a->num[1];
	data->a->num[1] = tmp;
}

void	sb(t_data *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->b->num[0];
	data->b->num[0] = data->b->num[1];
	data->b->num[1] = tmp;
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
}
