/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:03:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/11 17:53:23 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*substr;

// 	i = 0;
// 	substr = malloc(1 * ((len) + 1));
// 	while (s[start] != '\0' && i < len)
// 	{
// 		substr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

// char	**ft_count_splits(char const *s, char c)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (s[j] != '\0')
// 	{
// 		if (s[j] == c)
// 			i++;
// 		j++;
// 	}
// 	return (malloc((i * 3) * 4));
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		len;
// 	int		k;
// 	char	**new;

// 	new = ft_count_splits(s, c);
// 	j = 0;
// 	i = 0;
// 	k = 0;
// 	while (s[j] != '\0')
// 	{
// 		if (s[j] == c)
// 		{
// 			len = j - i;
// 			new [k] = ft_substr(s, i, len);
// 			i = j + 1;
// 			k++;
// 		}
// 		j++;
// 	}
// 	len = j - i;
// 	new[k] = ft_substr(s, i, len);
// 	return (new);
// }

#include "libft.h"

int	ft_count_str(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			while (s[j] == c)
				j++;
			i++;
		}
		j++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	int		k;
	char	**new;

	i = ft_count_str(s, c);
	if (i < 1)
		return (NULL);
	new = malloc((4 * (i * 4)) + 1);
	j = 0;
	i = 0;
	k = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c && s[j - 1] != c)
		{
			len = j - i;
			new [k] = ft_substr(s, i, len);
			i = j + 1;
			k++;
		}
		if (s[j] == c && s[j - 1] == c)
			i++;
		j++;
	}
	len = j - i;
	new[k] = ft_substr(s, i, len);
	return (new);
}

// int	main(void)
// {
// 	char	**array_of_strings;
// 	int		i;

// // 	i = 0;
// 	array_of_strings = ft_split("A    Logo     B.", 32);
// 	while (i < 3)
// 	{
// 		printf("%s\n", *(array_of_strings + i));
// 		i++;
// 	}
// 	free(array_of_strings);
// }
