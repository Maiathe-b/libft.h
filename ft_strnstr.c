/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:24:10 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/14 16:24:39 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big1;
	char	*little1;
	size_t	i;
	size_t	j;

	big1 = (char *) big;
	little1 = (char *) little;
	i = 0;
	j = 0;
	if(!*little1)
		return (big1);
	while(big1[i])
	{
		j = 0;
		while(big[i] && (i + j < len) && (big1[i + j] == little1[j]))
			j++;
		if(little1[j] == 0)
			return (&big1[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char arr[] = "ya bro";


// 	char arr2[] = " b";




// 	printf("%s\n", ft_strnstr(arr, arr2, 6));
// 	//printf("%d\n", strlcpy(s2, s, 5));
// 	return (0);
// }
