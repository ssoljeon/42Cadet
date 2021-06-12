/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:30:23 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/18 21:39:00 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_minlen(unsigned int x, unsigned int y)
{
	if (x >= y)
	{
		return (y);
	}
	else
	{
		return (x);
	}
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	unsigned int	minlen;
	char			*ret;
	unsigned int	i;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	minlen = ft_minlen(slen - start, len);
	if (!(ret = (char*)malloc(minlen * sizeof(char) + 1)))
		return (0);
	i = 0;
	while (i < minlen)
	{
		ret[i] = ((char *)s)[start];
		++i;
		++start;
	}
	ret[i] = '\0';
	return (ret);
}
