/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalb <fkalb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 21:46:28 by fkalb             #+#    #+#             */
/*   Updated: 2015/01/02 22:31:42 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ptr;
	t_list	*new_lst;
	t_list	*new_elem;

	ptr = lst;
	new_lst = NULL;
	while (ptr)
	{
		ret = f(ptr);
		if (!new_lst)
		{
			new_lst = ft_lstnew(ret->content, ret->content_size);
		}
		else
		{
			new_elem = ft_lstnew(ret->content, ret->content_size);
			ft_lstadd_toend(&new_lst, new_elem);
		}
		if (!new_lst || !new_elem)
			return (NULL);
		ptr = ptr->next;
	}
	return (new_lst);
}
