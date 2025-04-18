/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:53:15 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/15 13:50:17 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while(*nptr == ' '|| (*nptr > 8 && *nptr < 14))
		nptr++;
	while(*nptr == '-' || *nptr == '+')
	{
		if(*nptr == '-' && (*(nptr - 1) != '-' && *(nptr - 1) != '+'))
			sign = -1;
		if((*(nptr - 1) == '-' || *(nptr - 1) == '+'))
			return(0);
		nptr++;
	}
	while(*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10;
		num = num + *nptr - 48;
		nptr++;
	}
	num = num * sign;
	return (num);
}



// int	main()
// {
// 	char arr[] = "    -12abc45";
// 	char *s;
// 	s = arr;




// 	printf("%d\n", ft_atoi(s));
// 	printf("%d\n", atoi(s));
// 	return (0);
// }
