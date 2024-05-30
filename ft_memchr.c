/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:48:35 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 15:45:58 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;
	size_t			i;

	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == (unsigned char)c)
			return (s_char + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char *result = memchr(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf("C function gives: %s\n", result);
		char *ft_result = ft_memchr(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf("My function gives: %s\n", ft_result);
	}
}
*/
