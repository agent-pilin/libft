/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:12:05 by slipin            #+#    #+#             */
/*   Updated: 2024/05/20 18:08:14 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (start + len - 1 < ft_strlen(s))
		substring = malloc(sizeof(char) * (len + 1));
	else if (ft_strlen(s) > start)
		substring = malloc(sizeof(char) * \
				(ft_strlen(s) - start + (ft_strlen(s) > 0) + 1));
	else
		substring = malloc(sizeof(char));
	if (substring == NULL)
		return (0);
	while (start + i < ft_strlen(s) && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = 0;
	return (substring);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
}
*/