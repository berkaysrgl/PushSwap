/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:25:49 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:30:47 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	src = (char *) s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (char) c)
			return (src + i);
		i++;
	}
	return (NULL);
}
