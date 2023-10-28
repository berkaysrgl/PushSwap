/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:27:32 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:31:23 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	c;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		c = 0;
		while ((str[i + c] == to_find[c]) && (i + c) < len)
		{
			if (to_find[c + 1] == '\0')
				return ((char *)(&str[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
