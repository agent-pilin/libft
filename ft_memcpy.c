/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:20:10 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 18:20:14 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_char;
	size_t		i;
	unsigned char		*dest_char;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_char = (unsigned char *)dest;
	src_char = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		//char	*result = memcpy(argv[1], argv[2], atoi(argv[3]));
		//printf("C function (dest): %s\n", argv[1]);
		//printf("C function (src): %s\n", argv[2]);
		//printf("C function gives: %s\n", result);
		//char	*ft_result = ft_memcpy(argv[1], argv[2], atoi(argv[3]));
		//printf("My function (dest): %s\n", argv[1]);
		//printf("My function (src): %s\n", argv[2]);
		//printf("My function (result): %s\n", ft_result);
		char	*ft_result = ft_memcpy(((void*)0), ((void*)0), 3);
	}
}
*/
