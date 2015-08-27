/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 00:58:45 by fkalb             #+#    #+#             */
/*   Updated: 2015/01/03 01:42:56 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstprint(t_list **alst)
{
	t_list	*tmp;

	tmp = *alst;
	while (!tmp)
		return ;
	ft_putendl(tmp->content);
	tmp = tmp->next;
}
