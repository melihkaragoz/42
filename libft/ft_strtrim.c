/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:30:21 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/25 12:06:29 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ns;

	i = 0;
	ns = 0;
	if (!s1 || !set)
		return (NULL);
	if (set != 0 && s1 != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen(s1) - 1;
		while (s1[j] && ft_strchr(set, s1[j]))
			j--;
		ns = ft_substr(s1 + i, 0, (++j - i));
		if (!ns)
			return (NULL);
	}
	return (ns);
}
