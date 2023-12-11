/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:57:41 by locastel          #+#    #+#             */
/*   Updated: 2023/12/11 19:21:02 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "ft_strlowcase.c"

int	main (int argc, char *argv[])
{
if (argc != 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
	int result = ft_strlowcase(argv[1]);

    printf("'%s' \n", (argv[1]));
    
    return 0;
}
