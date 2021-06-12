/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:32:33 by sojeon            #+#    #+#             */
/*   Updated: 2021/06/12 19:36:44 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*ret;
	unsigned int	idx;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(ret = (char *)malloc(len * sizeof(char) + 1)))
		return (0);
	idx = 0;
	while (s[idx] != '\0')
	{
		ret[idx] = f(idx, s[idx]);
		++idx;
	}
	ret[idx] = '\0';
	return (ret);
}
