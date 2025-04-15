/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:56:53 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/15 14:36:33 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d", ft_isalnum(' '));
// }
