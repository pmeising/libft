/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:33:56 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/19 18:39:39 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!len || (size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc((len + 1) * sizeof(substr));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[(size_t)start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
