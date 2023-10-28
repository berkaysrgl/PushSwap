/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:27:36 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:31:24 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = 0;
	while (1)
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (p);
}
