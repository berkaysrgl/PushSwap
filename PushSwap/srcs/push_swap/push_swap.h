/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:29:37 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:22 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../library/ft_libft/libft.h"
# include "stdio.h"

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
	int		*steps;
	char	**num;
	int		cheapest;
}			t_data;

void	ft_parse(t_data *data, int ac, char **av);
char	*ps_strjoin(char *s1, char *s2);
int		ps_atoi(const char *str);
void	error(void);
void	five_sort(t_data *data);
void	sa(t_data *data, int rule);
void	sb(t_data *data, int rule);
void	ss(t_data *data);
void	ra(t_data *data, int rule);
void	rb(t_data *data, int rule);
void	rr(t_data *data);
void	rra(t_data *data, int rule);
void	rrb(t_data *data, int rule);
void	rrr(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
int		is_sorted(t_stack *stack);
void	neg_pos_control(char	**num);
int		min_stack(t_stack *stack);
int		max_stack(t_stack *stack);
void	find_cheapest(t_data *data);
int		take_cheapest(t_data *data);
int		find_the_position_number(t_stack *stack, int anum);
void	ft_start(t_data *data);
int		find_number(t_stack *stack, int nbr);
void	ft_rotate_m(t_data *data);
void	ft_rotate_m2(t_data *data);
void	ft_rotate_m3(t_data *data);
void	ft_rotate_o(t_data *data);
void	ft_rotate_o2(t_data *data);
void	ft_rotate_o3(t_data *data);
#endif
