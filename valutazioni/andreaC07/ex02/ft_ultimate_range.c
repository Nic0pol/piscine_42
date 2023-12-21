/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpasqua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:46:56 by anpasqua          #+#    #+#             */
/*   Updated: 2023/12/20 14:14:40 by anpasqua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		x;
	int		*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = 0;
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		x = 0;
		while (min < max)
		{
			array[x] = min;
			min++;
			x++;
		}
		*range = array;
		return (x);
	}
}
