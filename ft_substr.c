/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/19 19:13:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*ft_helper(unsigned int start, size_t len, size_t s_len)
// {
// 	char	*substr;

// 	if (len >= s_len)
// 	{
// 		substr = malloc(sizeof(char) * (s_len - start + 1));
// 		if (!substr)
// 			return (NULL);
// 	}
// 	else
// 	{
// 		substr = malloc(sizeof(char) * (len + 1));
// 		if (!substr)
// 			return (NULL);
// 	}
// 	return (substr);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;	
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	else if (!len || (size_t)start > s_len)
		return (ft_strdup(""));
	else if (len >= s_len)
		substr = malloc(sizeof(char) * (s_len - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!substr)
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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;
// 	size_t	i;

// 	if (!len || (size_t)start > ft_strlen(s))
// 		return (ft_strdup(""));
// 	if (s == NULL)
// 		return (NULL);
// 	if ((ft_strlen(s + start)) < len)
// 		len = ft_strlen(s + start);
// 	substr = (char *)malloc(1 + (len) * sizeof(substr));
// 	if (!substr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[(size_t)start + i];
// 		i++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

// char
// 	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	str = (char*)malloc(sizeof(*s) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }
