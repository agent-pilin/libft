/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:51:05 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 18:07:37 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned long	pattern_length;
	size_t			i;

	i = 0;
	pattern_length = ft_strlen(to_find);
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (str[i + pattern_length - 1] != '\0' && i + pattern_length <= len)
		{
			if (ft_strncmp(str + i, to_find, pattern_length) == 0)
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
printf("String: %s\n", argv[1]);
printf("Substring: %s\n", argv[2]);
printf("My function gives: %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
printf("C function gives: %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	}
}
*/
