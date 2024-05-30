/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:39:56 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 18:56:21 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("String 1: %s\n", argv[1]);
		printf("String 2: %s\n", argv[2]);
printf("My function gives: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
printf("C function gives: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}
*/
