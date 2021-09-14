/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:55:30 by sojeon            #+#    #+#             */
/*   Updated: 2021/09/14 15:08:06 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst == 0 && src == 0)
		return (0);
	while (len-- > 0)
	{
		if (d > s)
			*(d + len) = *(s + len);
		else
			*d++ = *s++;
	}
	return (dst);
}
