/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:33:02 by pmeising          #+#    #+#             */
/*   Updated: 2022/04/29 17:23:14 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	ch = s;
	i = 0;
	while (i < n)
	{
		*ch = '\0';
		ch ++;
		i++;
	}
}
