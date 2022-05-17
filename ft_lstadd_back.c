/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:14:04 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/17 20:02:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_to_last;
	t_list	*ptr_to_head;

	if (*lst == NULL)
		*lst = new;
	ptr_to_head = *lst;
	ptr_to_last = ft_lstlast(ptr_to_head);
	ptr_to_last->next = new;
	new->next = NULL;
}
