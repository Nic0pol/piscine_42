/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:41:04 by locastel          #+#    #+#             */
/*   Updated: 2023/12/20 16:11:43 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	nbl;
	char	chest[10];
	int		i;

	nbl = nbr;
	i = 0;
	if (0 == nbl)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nbl < 0)
	{
		write(1, "-", 1);
		nbl *= -1;
	}
	while (nbl)
	{
		chest[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
		write(1, &chest[--i], 1);
}
