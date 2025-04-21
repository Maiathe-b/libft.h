/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:14:17 by jomaia            #+#    #+#             */
/*   Updated: 2025/04/21 15:25:58 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if(!lst || !del)
		return ;
	current = *lst;
	while(current)
	{
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
		current = *lst;
	}
	*lst = NULL;
}
