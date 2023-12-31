/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-hort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:31:04 by mde-hort          #+#    #+#             */
/*   Updated: 2023/12/14 14:34:51 by mde-hort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}
