/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:50:56 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/24 01:12:45 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

int	main(void)
{
	int	f;

	f = open("fd_example.txt",O_RDWR | O_CREAT,777);
	printf("fd is : %d\n",f);
	ft_putchar_fd('m',f);
	return (0);
}
