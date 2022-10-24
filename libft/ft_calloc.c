/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:32:37 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/24 19:12:14 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*np;
	size_t		i;

	i = 0;
	np = NULL;
	if (count && size)
	{
		np = (void *) malloc(count * size);
		while (i < count * size)
			((char *) np)[i++] = 0;
	}
	return (np);
}
