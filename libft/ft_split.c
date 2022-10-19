/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:16:50 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/19 19:53:17 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **bp;
    char *n;
    int    i;
    int    count;
    int    j;

    i = 0;
    n = (char *)s;
    bp = malloc(100 * sizeof(char *));
    count = 0;
    while (*(n + i))
    {
        if (*(n + i) == c)
            i++;
        else
        {
            j = i;
            while (*(n + i) && *(n + i) != c)
                i++;
            if (++count && *(n+i))
              n[i++] = 0;
            bp[count-1] = (n+j);
        }
    }
    bp[++count] = 0;
    return (bp);
}

int    main(void)
{
    char    s[] = ",,,,melih,karagoz,42";
    char    sep = ',';
    char **fp = ft_split(s,sep);
    int i = 0;
    while (i < 3)
    {
        printf("%s\n",(*(fp+i)));
        i++;
    }
    return (0);
}
