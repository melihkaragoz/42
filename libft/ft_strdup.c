/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 04:45:07 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/24 19:15:04 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*c;

	c = (char *) malloc(ft_strlen(str) + 1);
	if (!(c))
		return (NULL);
	ft_strlcpy(c, str,ft_strlen(str));
	return (c);
}
