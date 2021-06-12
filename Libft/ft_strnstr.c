/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:30:01 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/18 21:32:44 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (len <= 0)
		return (0);
	while (*haystack != '\0' && i <= len)
	{
		if (needle[j] == '\0')
			return ((char *)haystack + (i - j));
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (haystack[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
