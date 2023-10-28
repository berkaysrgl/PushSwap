/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:23:10 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:29:43 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_rules_2(t_data *data, char *str)
{
	if (!ft_strncmp("rra", str, 3) && str)
		rra(data);
	else if (!ft_strncmp("rrb", str, 3) && str)
		rrb(data);
	else if (!ft_strncmp("rrr", str, 3) && str)
		rrr(data);
	else if (!ft_strncmp("ra", str, 2) && str)
		ra(data);
	else if (!ft_strncmp("rb", str, 2) && str)
		rb(data);
	else if (!ft_strncmp("rr", str, 2) && str)
		rr(data);
	else if (str)
		ft_exit_free_all('e');
}

static void	ft_check_rules(t_data *data, char *str)
{
	if (str == NULL && !(is_sorted(data->a)))
		ft_exit_free_all('k');
	if (!str && is_sorted(data->a) && data->b->size == 0)
		ft_exit_free_all('o');
	if (!str && data->b->size > 0)
		ft_exit_free_all('k');
	if (!(ft_strncmp("sa", str, 2)) && str)
		sa(data);
	else if (!ft_strncmp("sb", str, 2) && str)
		sb(data);
	else if (!ft_strncmp("ss", str, 2) && str)
		ss(data);
	else if (!ft_strncmp("pa", str, 2) && str)
		pa(data);
	else if (!ft_strncmp("pb", str, 2) && str)
		pb(data);
	else
		ft_check_rules_2(data, str);
}

int	main(int ac, char **av)
{
	t_data	*data;
	char	*str;

	data = ft_calloc(sizeof(t_data), 1);
	if (ac > 1)
	{
		ft_parse(data, ac, av);
		while (1)
		{
			str = get_next_line(0);
			ft_check_rules(data, str);
			free(str);
		}
	}
	else
		return (0);
}
