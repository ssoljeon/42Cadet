/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:17:59 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/18 14:12:44 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	idx;
	unsigned int	len;

	if (!dst || !src)
	{
		return (0);
	}
	len = ft_strlen(src);
	idx = 0;
	if (dstsize != 0)
	{
		while (src[idx] != '\0' && ((idx + 1) < dstsize))
		{
			dst[idx] = src[idx];
			idx++;
		}
		dst[idx] = '\0';
	}
	return (len);
}
