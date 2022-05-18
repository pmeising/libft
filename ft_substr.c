/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 16:28:16 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_helper(char *s, unsigned int start, size_t len, size_t s_len)
{
	char	*substr;

	if (start > s_len)
	{
		substr = malloc(sizeof(char) * 1);
		substr[0] = '\0';
		return (substr);
	}
	if (len >= s_len)
		substr = malloc(sizeof(char) * (s_len - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (substr[0] == '\0')
		return ;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;	
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	i = 0;
	substr = ft_helper(s, start, len, s_len);
	while (s[start] != '\0' && i < len && start <= s_len)
	{	
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
