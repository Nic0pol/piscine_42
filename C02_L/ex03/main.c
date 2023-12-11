/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:57:41 by locastel          #+#    #+#             */
/*   Updated: 2023/12/11 16:07:20 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "ft_str_is_numeric.c"

int	main (int argc, char *argv[])
{
if (argc != 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    int result = ft_str_is_numeric(argv[1]);

    if (result == 1)
    {
        printf("'%s' contains only numbers.\n", argv[1]);
    }
    else
    {
        printf("'%s' contains non-numbers.\n", argv[1]);
    }

    return 0;
}
