/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:13:21 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 18:35:40 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("My function gives: %s\n", ft_strchr(argv[1], atoi(argv[2])));
		printf("C function gives: %s\n", strchr(argv[1], atoi(argv[2])));
	}
}
*/
