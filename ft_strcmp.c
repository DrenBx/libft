/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:48:46 by fkalb             #+#    #+#             */
/*   Updated: 2015/01/02 23:55:53 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
