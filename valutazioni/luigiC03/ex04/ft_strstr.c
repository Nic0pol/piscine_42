/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:49:10 by largenzi          #+#    #+#             */
/*   Updated: 2023/12/20 14:04:57 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*initial;
	int		i;

	initial = to_find;
	if (to_find == 0 || *to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str != *to_find)
		{
			str++;
			to_find = initial;
		}
		i = 0;
		while (*str == *to_find && *to_find != '\0')
		{
			str++;
			to_find++;
			i++;
			if (*to_find == '\0')
				return (str - i);
		}
	}
	return (0);
}
