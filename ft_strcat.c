/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:56:33 by fkalb             #+#    #+#             */
/*   Updated: 2013/11/20 21:53:54 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
	{
		s1[i + j] = s2[i];
		i++;
	}
	s1[i + j] = '\0';
	return (s1);
}
