/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:40:45 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/10 14:26:40 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	int		i;

	tmp = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == tmp)
			return ((char *)s + i);
		i++;
	}
	if (tmp == '\0')
		return ((char *)s + i);
	return (NULL);
}
