/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:30:21 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/07 22:46:49 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		way;
	char	*newstr;
	int		it;

	i = 0;
	way = 0;
	it = 0;
	while (s1 && way < 2)
	{
		j = 0;
		while (set)
		{
			if (s1[i] == set[j])
				j++;
			else
			{
				newstr + it = malloc(sizeof(char));
				newstr + (it++) = set[j++];
			}
		}
	}
	return (newstr);
}
