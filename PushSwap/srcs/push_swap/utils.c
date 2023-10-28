/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:30:03 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:29 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

char	*ps_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	i;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ft_strlcpy(ptr + i, s2, (ft_strlen(s2) + 1));
	free (s1);
	return (ptr);
}

int	ps_atoi(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = result * 10 + (str[i] - 48) * sign;
		if (result > 2147483647 || result < -2147483648)
			error();
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		error();
	return ((int)result);
}

int	min_stack(t_stack *stack)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < stack->size)
	{
		if (stack->num[index] > stack->num[i])
			index = i;
		i++;
	}
	stack->mini = index;
	return (index);
}

int	max_stack(t_stack *stack)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < stack->size)
	{
		if (stack->num[index] < stack->num[i])
			index = i;
		i++;
	}
	stack->maxi = index;
	return (index);
}
