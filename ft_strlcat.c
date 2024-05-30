/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:47:36 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 16:24:42 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	j = 0;
	while (j < src_length && dest_length + j < size - 1 && size > 0)
	{
		dst[dest_length + j] = (char)src[j];
		j++;
	}
	dst[dest_length + j] = 0;
	if (size < dest_length)
		return (src_length + size);
	else
		return (src_length + dest_length);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("dest length: %lu\n", ft_strlen(argv[1]));
		printf("src length: %lu\n", ft_strlen(argv[2]));
		printf("size: %d\n", atoi(argv[3]));
		printf("My f: %d\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
		//printf("C f: %ld\n", strlcat(argv[1], argv[2], atoi(argv[3])));
		printf("Pointer dest: %s\n", argv[1]);
	}
}
*/
