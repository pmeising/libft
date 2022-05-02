/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:29:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/02 17:58:02 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srce;

	srce = (const unsigned char *)src;
	i = 0;
	if (((char *)dest)[0] == '\0')
		return (dest);
	else if (((char *)src)[0] == '\0')
		return ('\0');
	else if (&dest < (char *)&src)
		return (ft_memcpy(dest, src, n));
	else if (&dest > &src)
	{	
		while (src && dest && n > i)
		{	
			((char *)dest)[n] = ((char *)src)[n];
			n--;
		}
	}
	return (dest);
}

void	main(void)
{
	const char    source[] = "Hello!";
    char        dest[] = "BUFFER";
	char		*pointer_to_dest;

	printf("%s\n", source);
	printf("%s\n", dest);
	pointer_to_dest = ft_memcpy(dest, source, 4);
	printf("%s\n", pointer_to_dest);
}
