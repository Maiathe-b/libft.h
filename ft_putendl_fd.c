/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomaia <joaomaia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:28:36 by joaomaia          #+#    #+#             */
/*   Updated: 2025/04/20 15:31:56 by joaomaia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while (i < ft_strlen(s))
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

// int main()
// {
//     ft_putendl_fd("abcd", 1);
// }