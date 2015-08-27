/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:15:50 by fkalb             #+#    #+#             */
/*   Updated: 2015/01/02 22:57:07 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (!(ptr = ((unsigned char*)s)))
		return (NULL);
	while (ptr[i] != ((unsigned char)c) && i < n)
		i++;
	if (i < n)
		return (&ptr[i]);
	return (NULL);
}
