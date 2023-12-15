/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpasqua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:52:18 by anpasqua          #+#    #+#             */
/*   Updated: 2023/12/11 16:57:07 by anpasqua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (to_find[x] == str[i + x])
		{
			if (to_find[x + 1] == '\0')
			{
				return (str + i);
			}
			x++;
		}
		i++;
	}
	return (0);
}
