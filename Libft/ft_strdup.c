/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:00:17 by sojeon            #+#    #+#             */
/*   Updated: 2021/09/14 04:07:43 by sojeon           ###   ########.fr       */
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
	ret = (char *)malloc(len * sizeof(char) + 1);
	if (!ret)
		return (0);
	while (++i <= len - 1)
	{
		ret[i] = s1[i];
	}
	ret[len] = '\0';
	return (ret);
}
