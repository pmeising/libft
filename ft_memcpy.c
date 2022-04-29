/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:20:41 by pmeising          #+#    #+#             */
/*   Updated: 2022/04/29 22:04:32 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = dest;
	source = src;
	printf("%s\n", source);
	printf("%s\n", destination);
	i = 0;
	destination[i] = source[i];
	// while (i < n)
	// {
	// 	destination[i] = 65;
	// 	i++;
	// }
	// return (destination);
}

void	main(void)
{
	const char	*source = {"Hello!"};
	char		*dest = {"BUFFER"};
	char		*pointer_to_dest;

	printf("%s\n", source);
	printf("%s\n", dest);
	pointer_to_dest = ft_memcpy(dest, source, 6);
	printf("%s\n", pointer_to_dest);
}
