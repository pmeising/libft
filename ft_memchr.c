/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:36:42 by pmeising          #+#    #+#             */
/*   Updated: 2022/04/29 18:35:30 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	ch;

	ch = c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return (&str[i]);
		}
		i++;
	}
	return ('\0');
}
