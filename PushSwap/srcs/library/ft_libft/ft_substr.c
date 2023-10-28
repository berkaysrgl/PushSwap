/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:27:46 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:31:32 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	rule;
	char	*array;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	rule = ft_strlen(s + start);
	if (rule < len)
		len = rule;
	array = malloc(len + 1);
	if (!array)
		return (NULL);
	ft_strlcpy(array, s + start, len + 1);
	return (array);
}
