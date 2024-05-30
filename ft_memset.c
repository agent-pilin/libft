/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:00:21 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 14:43:06 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char			*s_char;

	i = 0;
	s_char = (char *)s;
	while (i < n)
	{
		s_char[i] = c;
		i++;
	}
	return (s_char);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printfmemset(argv[1], atoi(argv[2]), atoi(argv[3]));
		//printf("C function gives: %s", argv[1]);
		ft_memset(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf("My function gives: %s", argv[1]);
	}
}
*/