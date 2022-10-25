/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:34:39 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/25 02:39:19 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*new;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!(s && f))
		return ;
	len = ft_strlen(s);
	new = malloc(len * sizeof(char) + 1);
	if (!new)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	new[len] = 0;
}
