
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:31:18 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/09 18:34:00 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	
	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return(s2);
}
// {
// 	char arr[] = "ABCD";
// 	char *s;
// 	s = arr;
// 	//int i[] = {5 , 2 , 3 ,4};

// 	ft_memset(s, 'a', 2);
// 	printf("%s", s);
// 	//printf("%s", s + 2);
// 	return (0);
// }

