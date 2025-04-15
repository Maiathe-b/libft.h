/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:19:17 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/11 12:46:49 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*n1;
	unsigned char	*n2;
	size_t			i;

	i = 0;
	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	while(i < n)
	{
		if(n1[i] == n2[i])
			i++;
		else
			return (n1[i] - n2[i]);
	}
	return (0);
}

// int	main()
// {
// 	char arr[] = "ABCD";
// 	char *s;
// 	s = arr;

// 	char arr2[] = "    ";
// 	char *s2;
// 	s2 = arr2;



// 	printf("%d\n", ft_memcmp(s2, s, 2));
// 	printf("%d\n", memcmp(s2, s, 2));
// 	return (0);
// }
