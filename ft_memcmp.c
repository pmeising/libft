/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:37:12 by pmeising          #+#    #+#             */
/*   Updated: 2022/04/29 19:14:14 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n && str1 && str2)
	{
		if (str1[i] != str2[i] && str1[i] < str2[i])
			return (-1);
		else if (str1[i] != str2[i] && str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}
