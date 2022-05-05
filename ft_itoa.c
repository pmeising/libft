/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:00:43 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/05 23:02:22 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_zero_case(int n)
{
	char	*str;

	str = malloc(2);
	str[n] = '0';
	return (str);
}

int	ft_alen(int n, int j)
{
	while (n != 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_logic(char *str, int m, int j, int i)
{
	while (m != 0 && j >= 0)
	{
		str[j] = ((char )((m % 10)) + 48);
		m = m / 10;
		j--;
	}
	if (i < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		m;

	i = 0;
	j = 0;
	m = n;
	if (n == 0)
		return (ft_zero_case(n));
	j = ft_alen(n, j);
	if (m < 0)
	{
		j++;
		i = -1;
		m = m * i;
	}
	str = malloc(1 * (j + 1));
	str[j] = '\0';
	j--;
	str = ft_logic(str, m, j, i);
	return (str);
}
