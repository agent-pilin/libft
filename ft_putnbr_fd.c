/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:31:32 by slipin            #+#    #+#             */
/*   Updated: 2024/05/20 15:42:14 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	value;
	char			a;

	if (n < 0)
	{
		value = -n;
		write(fd, "-", 1);
	}
	else
		value = n;
	if (value / 10 > 0)
		ft_putnbr_fd(value / 10, fd);
	a = value % 10 + '0';
	write(fd, &a, 1);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
}
*/
