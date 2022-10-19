/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:16:50 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/19 17:53:12 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
    int		i;
    char	*tcp;
    char	*ns;
    char	**fp;
    int		fcp;
    int		tcpFlag;

    fcp = 0;
    i = -1;
    fp = malloc(5 * sizeof(char *));
    tcpFlag = 0;
    ns = (char *)s;
	while (*(ns + (++i)))
	{
		if (*(ns + i) != c)
		{
			if (!tcpFlag)
			{
				tcp = (char *)(ns + i);
				tcpFlag = 1;
			}
		}
		else
		{
			fp[fcp++] = tcp;
			tcpFlag = 0;
			ns[i] = 0;
		}
	}
	fp[fcp++] = tcp;
	*(fp + fcp) = 0;
	return (fp);
}

int    main(void)
{
    char    s[] = "melih,karagoz";
    char    sep = ',';
    char **fp = ft_split(s,sep);
    int i = 0;
    while (i < 2)
    {
        printf("%s\n",(*(fp+i)));
        i++;
    }
    return (0);
}
