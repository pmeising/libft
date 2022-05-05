/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:17:41 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/03 20:30:58 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len_dst;

	len_dst = ft_strlen(dst);
	if ((len_dst - dstsize - 1) > 0)
	{

	}
}


// strlcat() appends string src to the end of	dst.  It will append at	most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,	unless
// dstsize is	0 or the original dst string was longer	than dstsize (in prac-
// tice this should not happen as it means that either dstsize is incorrect
// or	that dst is not	a proper string).