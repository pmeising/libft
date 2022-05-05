/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:56:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/05 17:43:02 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i] != '\0' && needle[j] != '\0')
	{
		while (haystack[i] == needle[j] && i <= n && haystack[i] != '\0')
		{
			j++;
			i++;
		}
		if (j == len_needle)
			return ((char *)&haystack[i - j]);
		if (i >= n)
			return ((char *)&needle[len_needle]);
		i++;
	}
	return ((char *)&needle[len_needle]);
}
