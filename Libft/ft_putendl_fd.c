/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:17:28 by sojeon            #+#    #+#             */
/*   Updated: 2021/06/12 19:41:41 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		idx;
	char	nl;

	idx = 0;
	if (!s)
		return ;
	while (s[idx] != '\0')
	{
		write(fd, &s[idx], 1);
		++idx;
	}
	nl = '\n';
	write(fd, &nl, 1);
}
