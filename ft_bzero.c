/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:35:24 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/11 12:46:24 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	unsigned char	*s2;
	s2 = (unsigned char *)s;
	i = 0;
	 while (i < n)
	 {
		s2[i] = '\0';
		i++;
	 }
}

// int main()
// {
// 	char arr[] = "ABCD";
// 	unsigned char *s;
// 	s = arr;
// 	//int i[] = {5 , 2 , 3 ,4};

// 	ft_bzero(s, 2);
// 	printf("%s", s);
// 	printf("%s", s + 2);

// }


