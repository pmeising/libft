/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:17:41 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/05 23:03:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst != '\0')
		i++;
	if (i > size + 1)
		return ();
	while ()
	{
		dst[i] = src[j];
	
}

dst = 4;
src = 3;
size = 7;


"Hello"
"World"

// strlcat() appends string src to the end of	dst.  It will append at	most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,	unless
// dstsize is	0 or the original dst string was longer	than dstsize (in prac-
// tice this should not happen as it means that either dstsize is incorrect
// or	that dst is not	a proper string).