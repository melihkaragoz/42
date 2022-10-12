/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:08:41 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/05 21:31:05 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *ptr, int x, size_t n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			((unsigned char *)ptr)[i] = x;
			i++;
		}
	}
	return (ptr);
}
