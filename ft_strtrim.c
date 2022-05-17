/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:19:00 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/16 12:58:50 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		new_end;
	int		diff;	
	char	*dest;

	i = ft_logic_start(s1, set);
	new_end = ft_logic_end(s1, set);
	j = 0;
	diff = new_end - i;
	if (diff < 0)
		diff = 0;
	dest = malloc(sizeof(char) * (diff + 1));
	while (dest && i < new_end)
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
