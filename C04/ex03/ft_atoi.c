/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:12:54 by locastel          #+#    #+#             */
/*   Updated: 2023/12/21 16:25:45 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	chest;
	int	val;

	i = 0;
	val = 0;
	chest = 0;
	while (' ' == str[i])
		i++;
	while ('-' == str[i] || '+' == str[i])
	{
		if ('-' == str[i])
			val++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		chest = chest * 10 + str[i] - '0';
		i++;
	}
	if (! (val % 2))
		return (chest);
	return (-chest);
}
