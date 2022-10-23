/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:10:01 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/24 00:42:05 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[len] = 0;
	return (new);
}
