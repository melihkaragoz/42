/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 06:57:23 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/25 00:18:32 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*n;
	int		i;

	i = 0;
	n = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 != 0 && l2 != 0)
	{
		n = malloc((l1 + l2) + 1 * sizeof(char));
		if (!n)
			return (0);
		while (*s1 != 0)
			n[i++] = *(s1++);
		while (*s2 != 0)
			n[i++] = *(s2++);
	}
	n[i] = 0;
	return (n);
}
