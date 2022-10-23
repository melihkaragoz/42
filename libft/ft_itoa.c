/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:29:47 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/23 16:54:45 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		b;
	int		bs;
	int		cpi;
	char	*cp;
	int		nf;

	b = 1;
	bs = 1;
	cpi = 0;
	nf = 1;
	if (n < 0 && nf++)
		n *= -1;
	while (n > 0 && (n / bs) > 10 && b++)
		bs *= 10;
	cp = malloc(b * sizeof(char) + 1 + (nf - 1));
	if (!cp)
		return (0);
	if (nf == 2)
		*(cp + (cpi++)) = 45;
	bs *= 10;
	while (b > 0 && b--)
		*(cp + (cpi++)) = (n / (bs /= 10)) % 10 + 48;
	*(cp + (cpi++)) = 0;
	return (cp);
}
