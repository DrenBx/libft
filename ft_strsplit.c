/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:23:12 by fkalb             #+#    #+#             */
/*   Updated: 2015/08/27 11:44:08 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_nbword(char const *s, char c)
{
	size_t		i;
	size_t		j;
	short int	bol;

	i = 0;
	j = 0;
	bol = 0;
	while (s[i])
	{
		if (s[i] == c)
			bol = 0;
		if (s[i] != c && !bol)
		{
			j++;
			bol = 1;
		}
		i++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		wlen;
	char		**ret;

	i = 0;
	j = 0;
	if (!s || !(ret = malloc(sizeof(char *) * (ft_nbword(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		wlen = ft_strclen(s + i, c);
		ret[j++] = ft_strsub(s, i, wlen);
		i += wlen;
	}
	ret[j] = NULL;
	return (ret);
}
