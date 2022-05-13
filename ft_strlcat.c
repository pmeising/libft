/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:17:41 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/12 12:58:59 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	int		j;
// 	size_t	dst_len;

// 	i = 0;
// 	j = 0;
// 	dst_len = ft_strlen(dst);
// 	if (size <= dst_len)
// 		return (ft_strlen(src) + size);
// 	while (src[j] != '\0' && i <= (size - 1))
// 	{
// 		dst[dst_len + i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(dst) + ft_strlen(src));
// }
