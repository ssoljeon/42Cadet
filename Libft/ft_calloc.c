/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:05:32 by sojeon            #+#    #+#             */
/*   Updated: 2021/09/14 03:40:42 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*str;
	size_t	cnt;

	cnt = count * size;
	str = malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, cnt);
	return (str);
}
