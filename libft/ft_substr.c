/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:45:20 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/22 20:09:16 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    int        i;

    i = 0;
    if (len > 0 && s[start] != '\0')
    {
        new = malloc((len + 1) * sizeof(char));
        if (new)
        {
            while (i < len)
            {
                new[i] = s[start + i];
                i++;
            }
        }
        new[i] = '\0';
    }
    else
        return (0);
    return (new);
}
