/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:05:32 by sojeon            #+#    #+#             */
/*   Updated: 2021/05/10 12:14:31 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*str;
	size_t	cnt;

	cnt = count * size;
	if ((str = malloc(count * size)) == 0)
		return (0);
	ft_bzero(str, cnt);
	return (str);
}
