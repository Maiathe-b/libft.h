/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:52:37 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/11 12:47:00 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t		i;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while(i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return(dest2);
}

// int	main()
// {
// 	char arr[] = "ABCD";
// 	char *s;
// 	s = arr;

// 	char arr2[] = "    ";
// 	char *s2;
// 	s2 = arr2;



// 	printf("%s\n", (char *)ft_memcpy(s2, s, 2));
// 	printf("%s\n", (char *)memcpy(s2, s, 2));
// 	return (0);
// }
