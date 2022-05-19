/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/19 20:34:01 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;	
	size_t	s_len;
	char	*substr;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	else if (!len || (size_t)start > s_len)
		return (ft_strdup(""));
	else if (len >= s_len)
		substr = malloc(sizeof(char) * (s_len - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (NULL);
	while (s[start] != '\0' && i < len && start <= s_len)
	{	
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
