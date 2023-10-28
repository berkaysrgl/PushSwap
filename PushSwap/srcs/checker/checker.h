/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:23:21 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:29:50 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../library/ft_get_next_line/get_next_line.h"
# include "../library/ft_libft/libft.h"

typedef struct s_stack
{
	int	*num;
	int	size;
	int	maxi;
	int	mini;
}		t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
	char	**num;
}			t_data;

char	*ps_strjoin(char *s1, char *s2);
int		ps_atoi(const char *str);
void	error(void);
void	ft_parse(t_data *data, int ac, char **av);
int		is_sorted(t_stack *stack);
void	ft_exit_free_all(char c);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
#endif
