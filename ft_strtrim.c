/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:19:00 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/09 19:37:20 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_logic_start(char const *s1, char const *set)
{
	int	set_len;
	int	j;
	int	i;

	i = 0;
	set_len = ft_strlen(set);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != s1[i] && j < set_len)
			j++;
		if (j != set_len)
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_logic_end(char const *s1, char const *set)
{
	int	s1_len;
	int	set_len;
	int	k;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	while (s1 && s1_len >= 0)
	{
		k = 0;
		while (set[k] != s1[s1_len -1] && k < set_len && s1_len >= 0)
			k++;
		if (k != set_len && s1_len != 0)
			s1_len--;
		else
			break ;
	}
	return (s1_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		s1_len;	
	char	*dest;

	i = ft_logic_start(s1, set);
	s1_len = ft_logic_end(s1, set);
	j = 0;
	dest = malloc(1 * (s1_len + 1));
	while (dest && i < s1_len)
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
