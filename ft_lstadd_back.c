/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:14:04 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/17 08:41:07 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (((lst-> next) != NULL))
		lst = lst-> next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;
	t_list	*ptr_to_head;

	ptr_to_head = *lst;
	ptr = ft_lstlast(ptr_to_head);
	ptr->next = new;
	new->next = NULL;
}
