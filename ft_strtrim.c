/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:33:46 by fkalb             #+#    #+#             */
/*   Updated: 2015/08/26 13:45:17 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strtrim(char const *s)
{
	ssize_t	start;
	ssize_t	end;
	ssize_t	i;
	char	*str;

	i = 0;
	start = 0;
	end = ft_strlen(s);
	while (end > 0 && (ft_isspace(s[end]) || !s[end]) && ft_isspace(s[end - 1]))
		end--;
	while (ft_isspace(s[start]) && start < end)
		start++;
	str = malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	while (start + i < end)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
