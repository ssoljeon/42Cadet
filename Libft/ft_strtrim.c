/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:54:14 by sojeon            #+#    #+#             */
/*   Updated: 2021/06/12 09:48:21 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	while (!s1)
		return (0);
	while (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strrchr(set, s1[end]))
	{
		if (end == 0)
			break ;
		--end;
	}
	if (start > end)
		return (ft_strdup(""));
	if (!(ret = (char *)malloc((end - start + 1) * sizeof(char) + 1)))
		return (0);
	ft_strlcpy(ret, s1 + start, end - start + 2);
	return (ret);
}
