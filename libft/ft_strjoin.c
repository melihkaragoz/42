/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:51:19 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/25 05:33:03 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	l1;
	size_t	l2;
	char	*np;

	np = 0;
	i = 0;
	j = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 + l2 <= 0)
		return ((char *)(ft_calloc(1,1)));
	np = malloc((l1 + l2 + 1) * sizeof(char));
	while (s1[i])
	{
		np[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		np[i] = s2[j];
		i++;
		j++;
	}
	np[i] = 0;
	return (np);
}
