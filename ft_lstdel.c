/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 21:46:09 by fkalb             #+#    #+#             */
/*   Updated: 2015/01/03 00:54:13 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*next;

	while (alst && *alst)
	{
		next = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
}
