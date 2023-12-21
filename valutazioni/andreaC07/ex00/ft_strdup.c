/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpasqua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:20:45 by anpasqua          #+#    #+#             */
/*   Updated: 2023/12/20 14:09:33 by anpasqua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*ptr;
	int		len;

	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(sizeof(*ptr) * (len + 1));
	x = 0;
	while (src[x])
	{
		ptr[x] = src[x];
		x++;
	}
	return (ptr);
}
