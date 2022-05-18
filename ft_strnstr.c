/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:56:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 14:21:09 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	helperfunction(const char *h, const char *ne, size_t n, size_t k)
{
	int	j;

	j = 0;
	while (h[k] == ne[j] && k < n)
	{
		j++;
		k++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	len_needle;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && (i + k) < n)
		{
			if (needle[k + 1] == '\0')
				return ((char *)(haystack + i));
			k++;
		}
		i++;
	}
	return (NULL);
}
