/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:33:11 by locastel          #+#    #+#             */
/*   Updated: 2023/12/05 19:57:38 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_rem;

	temp_div = *a / *b;
	temp_rem = *a % *b;
	*a = temp_div;
	*b = temp_rem;
}
