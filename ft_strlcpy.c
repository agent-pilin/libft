/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:26:56 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 17:00:43 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size > 0 && i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
printf("Dest before: %s\n", argv[1]);
printf("Source before: %s\n", argv[1]);
printf("C function gives: %zu\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
//printf("My function gives: %lu\n", \
//ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
printf("Dest after: %s\n", argv[1]);
	}

//char src[] = "coucou";
//char dest[10];
//memset(dest, 'A', 10);
//printf("My function gives: %lu\n", \
//ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
//printf("C function gives: %lu\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
//printf("Source: %s\n", src);
//printf("Dest: %s\n", dest);
}
*/
