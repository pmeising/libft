/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:20:41 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 13:34:39 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (dest);
	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((const unsigned char *)(src + i));
		i++;
	}
	return (dest);
}
