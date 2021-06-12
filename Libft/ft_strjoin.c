/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:25:18 by sojeon            #+#    #+#             */
/*   Updated: 2021/06/12 20:26:00 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ret;
	int		idx;
	int		jdx;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(ret = (char *)malloc((s1_len + s2_len) * sizeof(char) + 1)))
		return (0);
	idx = -1;
	while (++idx < s1_len)
	{
		ret[idx] = s1[idx];
	}
	jdx = -1;
	while (++jdx < s2_len)
	{
		ret[idx] = s2[jdx];
		++idx;
	}
	ret[idx] = '\0';
	return (ret);
}
