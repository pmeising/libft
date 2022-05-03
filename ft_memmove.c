/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:29:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/03 14:59:19 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srce;

	i = 0;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
	{	
		while (n > i)
		{	
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	return (dest);
}
