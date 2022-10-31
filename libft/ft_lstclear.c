/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:30:23 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/28 17:50:29 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*f;
	t_list	*t;

	f = *lst;
	while ((*lst)->next)
	{
		t = *lst;
		del(*lst);
		free(*lst);
		*lst = t->next;
	}
	del(*lst);
	free(*lst);
	f->next = NULL;
}
