/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locastel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:21:02 by locastel          #+#    #+#             */
/*   Updated: 2023/12/11 14:53:09 by locastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int y = 0;
	while(src[y])
	{
		dest[y] = src[y];
		y++;
		}
	dest[y] = '\0';
	return (dest);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(void)
{
    char src[] = "lol";
    char dest[4];

    ft_strcpy(dest, src);

    ft_putstr("src: ");
    ft_putstr(src);
    ft_putstr("\n");
    ft_putstr("dest: ");
    ft_putstr(dest);
    ft_putstr("\n");

    return 0;
}
