/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:02:30 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/15 17:39:18 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if(!s)
		return(NULL);
	if (len == 0)
		return(NULL);
	else if(len > ft_strlen(s))
		str = ft_strdup(&s[start]);
	else
		return NULL;
	return (str);
}

// int main()
// {
// 	printf("%s", ft_substr("ola ola", 2, 3));
// }
