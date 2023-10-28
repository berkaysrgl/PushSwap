/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <berkaysarigul461@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:26:04 by bsarigul          #+#    #+#             */
/*   Updated: 2023/10/28 16:30:53 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst1;
	char	*src1;

	i = 1;
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst == src || !len)
		return (dst);
	if (src1 < dst1)
	{
		while (i <= len)
		{
			dst1[len - i] = src1[len - i];
			i++;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
