/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:54:34 by sojeon            #+#    #+#             */
/*   Updated: 2021/06/12 11:26:46 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n)
	{
		n /= 10;
		++size;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	tmp;
	char	*ret;

	len = ft_len(n);
	if (!(ret = (char *)malloc(len * sizeof(char) + 1)))
		return (0);
	ret[len] = '\0';
	tmp = n;
	if (tmp < 0)
	{
		ret[0] = '-';
		tmp *= -1;
	}
	while (tmp > 9)
	{
		ret[--len] = (tmp % 10 + '0');
		tmp = tmp / 10;
	}
	ret[--len] = (tmp + '0');
	return (ret);
}
