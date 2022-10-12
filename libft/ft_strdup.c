/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 04:45:07 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/06 04:46:40 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*c;

	c = (char *) malloc(ft_strlen(str) + 1);
	if (!(c))
		return (NULL);
	c = ft_strcpy(c, str);
	return (c);
}
