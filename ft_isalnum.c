/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:32:40 by pmeising          #+#    #+#             */
/*   Updated: 2022/05/10 15:41:44 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
