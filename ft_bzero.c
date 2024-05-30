/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:13:00 by slipin            #+#    #+#             */
/*   Updated: 2024/05/20 18:27:50 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_char;
	size_t			i;

	i = 0;
	s_char = (unsigned char *)s;
	while (i < n)
	{
		s_char[i] = 0;
		i++;
	}
	s = s_char;
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_bzero(argv[1], atoi(argv[2]));
		//printf("ft_bzero: %s\n", argv[1]);
		//bzero(argv[1], atoi(argv[2]));
		unsigned int	i = 0;
		while (i < ft_strlen(argv[1]))
		{
			printf("b_zero: %s\n", argv[1] + i);
			i++;
		}

	}
}
*/
