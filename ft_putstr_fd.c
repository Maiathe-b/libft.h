/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomaia <joaomaia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:25:12 by joaomaia          #+#    #+#             */
/*   Updated: 2025/04/20 15:28:16 by joaomaia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t  i;
    
    i = 0;
    while (i < ft_strlen(s))
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main()
// {
//     ft_putstr_fd("abcd", 1);
// }