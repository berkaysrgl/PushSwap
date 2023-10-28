/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 05:16:53 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:32:11 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	neg_pos_control(char	**num)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (num[i])
	{
		while (num[i][j])
		{
			if ((num[i][j] == '-' && num[i][j + 1] == '\0')
			|| (num[i][j] == '-' && num[i][j + 1] > 57)
			|| (num[i][j] == '-' && num[i][j + 1] < 48)
			|| (num[i][j] == '-' && num[i][j + 1] == ' '))
				error();
			else if ((num[i][j] == '+' && num[i][j + 1] == '\0')
			|| (num[i][j] == '+' && num[i][j + 1] < 48)
			|| (num[i][j] == '+' && num[i][j + 1] > 57)
			|| (num[i][j] == '+' && num[i][j + 1] == ' '))
				error();
			j++;
		}
		i++;
		j = 0;
	}
}
