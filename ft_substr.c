/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 20:54:56 by pmeising         ###   ########.fr       */
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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;	
// 	size_t	s_len;
// 	char	*substr;

// 	s_len = ft_strlen(s);
// 	if (!s)
// 		return (NULL);
// 	if (!len || (size_t)start > s_len)
// 		return (ft_strdup(""));
// 	i = 0;
// 	substr = ft_helper(start, len, s_len);
// 	while (s[start] != '\0' && i < len && start <= s_len)
// 	{	
// 		substr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	count;

	if (!len || (size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc((len + 1) * sizeof(ptr));
	if (!ptr)
		return (NULL);
	count = 0;
	while (count < len)
	{
		ptr[count] = s[(size_t)start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
