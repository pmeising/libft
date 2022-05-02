/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:59:31 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/02 15:06:47 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		if (((char *)s)[i] = c)
			return (s[i]);
		i++;
	}
	return ('\0');
}

void	main(void)
{
	char	s[] = "Hello World!";
	char	*rv;
	int		character;

	character = 65;
	rv = ft_strchr(s, character);
	printf("%s", rv);
}
