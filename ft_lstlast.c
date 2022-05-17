/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:05:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/17 20:37:25 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (((lst->next) != NULL))
		lst = lst->next;
	return (lst);
}


// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*ptr_to_last;
// 	t_list	*ptr_to_head;

// 	if (*lst == NULL)
// 		*lst = new;
// 	ptr_to_head = *lst;
// 	ptr_to_last = ft_lstlast(ptr_to_head);
// 	ptr_to_last->next = new;
// 	new->next = NULL;
// }

// int	main(void)
// {
// 	char	*s;
// 	char	*s1;
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	**head;

// 	s = "Hello!";
// 	s1 = "World";
// 	first = ft_lstnew(s);
// 	head = &first;
// 	new = ft_lstnew(s1);
// 	ft_lstadd_back(head, new);
// 	ft_lstsize(first);
// }