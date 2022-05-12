/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:56:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/11 15:21:24 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (haystack[i] != '\0' && i <= n)
	{
		while (haystack[i] == needle[j] && i <= n)
		{
			j++;
			i++;
		}
		if (j == len_needle)
			return ((char *)&haystack[i - j]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
