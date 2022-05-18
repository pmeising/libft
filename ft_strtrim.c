/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:19:00 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/18 10:52:33 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	if (s1 == NULL)
		return (0);
	while (s1[start] != '\0' && (ft_strchr(set, s1[start])))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && (ft_strchr(set, s1[end])))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
