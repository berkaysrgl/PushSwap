/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:11 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:10 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**add_numbersto_int(t_data *data, int ac, char **av)
{
	char	*str;
	int		i;

	i = 1;
	data->a = ft_calloc(sizeof(t_stack), 1);
	data->b = ft_calloc(sizeof(t_stack), 1);
	while (i < ac)
	{
		str = ps_strjoin(str, av[i]);
		str = ps_strjoin(str, " ");
		i++;
	}
	i = 0;
	data->num = ft_split(str, ' ');
	while (data->num[i])
		i++;
	data->a->size = i;
	data->b->size = 0;
	data->a->num = malloc(sizeof(int) * data->a->size);
	data->b->num = malloc(sizeof(int) * data->a->size);
	free(str);
	return (data->num);
}

void	other_than_numbers(char **num)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (num[i])
	{
		while (num[i][j])
		{
			if (!(ft_isdigit(num[i][j])) && num[i][j] != '-'
				&& num[i][j] != '+')
				error();
			j++;
		}
		j = 0;
		i++;
	}
}

int	is_duplicated(t_data *data, char **num)
{
	int	i;
	int	index;
	int	count;

	i = 0;
	while (i < data->a->size)
	{
		index = 0;
		count = 0;
		while (index < data->a->size)
		{
			if (ps_atoi(num[i]) == ps_atoi(num[index]))
				count++;
			index++;
		}
		if (count > 1)
			error();
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < stack->size - 1)
	{
		if (stack->num[i] > stack->num[i + 1])
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

void	ft_parse(t_data *data, int ac, char **av)
{
	char	**num;
	int		i;

	i = -1;
	num = add_numbersto_int(data, ac, av);
	other_than_numbers(num);
	neg_pos_control(num);
	is_duplicated(data, num);
	while (++i < data->a->size)
		data->a->num[i] = ps_atoi(num[i]);
	if (is_sorted(data->a))
		exit(1);
}
