/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:56:39 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/15 14:43:31 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char) c)
			return ((char *)s);
		s++;
	}
	if(*s == c)
		return ((char *) s);
	return (NULL);
}
