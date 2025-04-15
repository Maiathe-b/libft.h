/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:25:19 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/15 15:43:54 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;
	size_t i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if(destlen >= size)
		return (size + srclen);
	while (src[i] && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int	main()
// {
// 	char arr[] = "ABCDefg";
// 	char *s;
// 	s = arr;

// 	char arr2[] = "     ";
// 	char *s2;
// 	s2 = arr2;



// 	printf("%d\n", (int)ft_strlcat(s, s2, 5));
// 	//printf("%d\n", strlcpy(s2, s, 5));
// 	return (0);
// }

