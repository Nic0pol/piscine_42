/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:28:20 by locastel          #+#    #+#             */
/*   Updated: 2023/12/11 18:56:41 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (*str);
}
