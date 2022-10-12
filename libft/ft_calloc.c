/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:32:37 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/11 18:31:18 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*np;
	int		i;

	i = 0;
	if (count && size)
	{
		np = (void *) malloc(count * size);
		while (i < count * size)
			((char *) np)[i++] = 0;
	}
	return (np);
}
