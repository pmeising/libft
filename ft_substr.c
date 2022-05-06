/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/06 19:17:18 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*substr;

	i = 0;
	substr = malloc(1 * ((len) + 1));
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

