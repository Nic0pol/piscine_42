/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpasqua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:25:51 by anpasqua          #+#    #+#             */
/*   Updated: 2023/12/14 15:55:03 by anpasqua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	while (x < size && dest[x] != '\0')
	{
		x++;
	}
	while ((x + i + 1) < size && src[i])
	{
		dest[x + i] = src[i];
		i++;
	}
	if (x != size)
	{
		dest[x + i] = '\0';
	}
	return (x + ft_strlen(src));
}
