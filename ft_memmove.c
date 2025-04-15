/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:08:06 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/14 16:10:39 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	i = 0;
	if ( dest > src)
	{
		i = n;
		while(i > 0)
		{
			dest1[i-1] = src1[i-1];
			i--;
		}
	}
	else
	{
		while(i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

// int	main()
// {
// 	char arr[] = "ABCD";
// 	char *s;
// 	s = arr;

// 	char arr2[] = "    ";
// 	char *s2;
// 	s2 = arr2;



// 	printf("%s\n", (char *)ft_memmove(s2, s, 5));
// 	printf("%s\n", (char *)memmove(s2, s, 5));
// 	return (0);
// }
