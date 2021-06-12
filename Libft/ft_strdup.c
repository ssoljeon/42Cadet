/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:00:17 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/18 21:33:40 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*ret;

	i = -1;
	len = 0;
	while (s1[len])
	{
		++len;
	}
	if (!(ret = (char*)malloc(len * sizeof(char) + 1)))
		return (0);
	while (++i <= len - 1)
	{
		ret[i] = s1[i];
	}
	ret[len] = '\0';
	return (ret);
}
