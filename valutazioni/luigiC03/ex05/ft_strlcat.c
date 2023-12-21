/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:59:25 by largenzi          #+#    #+#             */
/*   Updated: 2023/12/20 14:02:16 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = str_len(dest);
	src_length = str_len(src);
	if (size <= dest_length)
		return (dest_length + src_length);
	i = 0;
	while (*dest != '\0' && i < size - 1)
	{
		dest++;
		i++;
	}
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (size > 0)
		*dest = '\0';
	return (dest_length + src_length);
}
