/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/19 20:53:23 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;	
// 	size_t	s_len;
// 	char	*substr;

// 	i = 0;
// 	s_len = ft_strlen(s);
// 	if (!s)
// 		return (NULL);
// 	if (s_len < start)
// 	{
// 		substr = malloc(1);
// 		if (substr == 0)
// 			return (NULL);
// 		substr[0] = '\0';
// 		return (substr);
// 	}
// 	if (len > s_len - start)
// 		len = s_len - start;
// 	substr = malloc(sizeof(char) * (len + 1));
// 	if (substr == 0)
// 		return (NULL);
// 	while (s[start] != '\0' && i < len && start <= s_len)
// 	{	
// 		substr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

	// if (!s)
	// 	return (NULL);
	// else if (!len || (size_t)start >= s_len)
	// 	return (ft_strdup(""));
	// else if (len >= s_len)
	// 	substr = malloc(sizeof(char) * (s_len - start + 1));
	// else

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	total_len;
	size_t	counter;

	if (!s)
		return (NULL);
	if (!len || start >= (ft_strlen(s)))
		return (ft_strdup(""));
	substr = malloc(len * sizeof(char) + 1);
	if (substr == 0)
		return (NULL);
	total_len = start + len;
	counter = 0;
	while (start < total_len)
	{
		substr[counter] = s[start];
		start++;
		counter++;
	}
	substr[counter] = 0;
	return (substr);
}
