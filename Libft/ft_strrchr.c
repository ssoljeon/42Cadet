/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:27:18 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/10 15:06:24 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	int		i;

	tmp = (char)c;
	i = ft_strlen(s);
	if (tmp == '\0')
		return ((char *)s + i);
	while (--i >= 0)
	{
		if (s[i] == tmp)
			return ((char *)s + i);
	}
	return (NULL);
}
