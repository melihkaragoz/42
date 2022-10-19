/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:16:50 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/19 20:48:59 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**bp;
	char	*n;
	int		i;
	int		j;
	int		wc;

	i = 0;
	n = (char *)s;
	bp = malloc(100 * sizeof(char *));
	wc = 0;
	while (*(n + i))
	{
		while (*(n + i) == c)
			i++;
		j = i;
		while (*(n + i) && *(n + i) != c)
			i++;
		if (++wc && *(n + i))
			n[i++] = 0;
		bp[wc - 1] = (n + j);
	}
	bp[++wc] = 0;
	return (bp);
}
