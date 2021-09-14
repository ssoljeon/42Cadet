/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojeon <sojeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:34:15 by sojeon            #+#    #+#             */
/*   Updated: 2021/09/14 16:48:43 by sojeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getrow(char const *s, char c)
{
	int		idx;
	size_t	ret;

	idx = 0;
	ret = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c)
		{
			++ret;
			while (s[idx] && s[idx] != c)
				++idx;
		}
		else
			++idx;
	}
	return (ret);
}

static size_t	ft_getlen(char const *s, char c)
{
	size_t	ret;
	int		idx;

	ret = 0;
	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c)
			break ;
		++ret;
		++idx;
	}
	return (ret);
}

static int	ft_free(char **s)
{
	int		idx;

	idx = 0;
	while (s[idx])
	{
		free(s[idx]);
		++idx;
	}
	free(s);
	return (0);
}

char	**ft_split2(char **ret, char const *s, char c, int row)
{
	int		idx;
	int		len;

	idx = 0;
	while (idx < row)
	{
		while (*s == c)
			++s;
		len = ft_getlen(s, c);
		ret[idx] = (char *)malloc(len * sizeof(char) + 1);
		if (!ret[idx])
			ft_free(ret);
		ft_strlcpy(ret[idx], s, len + 1);
		++idx;
		if (idx < row)
			s += len;
	}
	ret[idx] = (NULL);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		row;
	int		idx;

	if (!s)
		return (0);
	row = ft_getrow(s, c);
	ret = (char **)malloc(sizeof(char *) * (row + 1));
	if (!ret)
		return (NULL);
	idx = 0;
	ft_split2(ret, s, c, row);
	return (ret);
}
