/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:39:32 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/18 21:29:26 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tmp;

	i = ft_strlen(s);
	tmp = (unsigned char)c;
	if (tmp == '\0')
	{
		return ((void *)s + i);
	}
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == tmp)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
