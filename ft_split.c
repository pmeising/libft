/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:03:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/07 01:02:46 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
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

char	**ft_count_splits(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
			i++;
		j++;
	}
	return (malloc((i * 3) * 4));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	int		k;
	char	**new;

	new = ft_count_splits(s, c);
	j = 0;
	i = 0;
	k = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			len = j - i;
			new [k] = ft_substr(s, i, len);
			i = j + 1;
			k++;
		}
		j++;
	}
	len = j - i;
	new[k] = ft_substr(s, i, len);
	return (new);
}
