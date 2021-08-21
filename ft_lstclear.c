/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-grif <pde-grif@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:57:49 by pde-grif          #+#    #+#             */
/*   Updated: 2021/08/17 16:17:21 by pde-grif         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	if (lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp -> next;
		del(tmp -> content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
