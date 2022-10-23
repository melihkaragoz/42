/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:34:39 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/24 00:41:33 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*new;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!(s && f))
		return (0);
	len = ft_strlen();
	new = malloc(len * sizeof(char) + 1);
	if (!new)
		return (0);
	while (s[i])
		new[i] = f(i, s+(i++));
	new[len] = 0;
}
