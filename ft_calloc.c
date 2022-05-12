/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:40:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/09 18:59:23 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(size_t number, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(number * size);
	while (i < (number * size))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
