/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:56:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 14:15:10 by pmeising         ###   ########.fr       */
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
	len_needle = ft_strlen(needle);
	if (!haystack)
		return (NULL);
	if (len_needle == 0)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < n)
	{
		k = i;
		j = helperfunction(haystack, needle, n, k);
		if (j == len_needle)
			return ((char *)&haystack[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
