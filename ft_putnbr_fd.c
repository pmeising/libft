/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 09:51:40 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/10 19:13:33 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n > -2147483648 && n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	if (n == 0)
		write(fd, "0", 1);
	if (n > 0 && n < 10)
	{
		c = n + 48;
		write(fd, &c, 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
		write(fd, &c, 1);
	}
}
