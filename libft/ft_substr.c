/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:45:20 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/18 06:55:51 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	if (len > 0 && start != 0)
	{
		new = malloc(len * sizeof(char));
		if (new)
		{
			while (i < len)
			{
				new[i] = s[start + i];
				i++;
			}
		}
	}
	else
		return (0);
	return (new);
}
