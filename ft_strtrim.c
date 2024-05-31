/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:05:04 by slipin            #+#    #+#             */
/*   Updated: 2024/05/17 17:48:35 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	value_in_base(char value, char const *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (value == (char)base[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s_trimmed;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - (ft_strlen(s1) > 0);
	while (value_in_base(s1[start], set))
		start++;
	while (value_in_base(s1[end], set) && end >= start)
		end--;
	s_trimmed = malloc(sizeof(char) * \
			(end - start + (s1[start] != 0) + (end < start) + 1));
	if (s_trimmed == NULL)
		return (0);
	while (start <= end && s1[start] != 0)
	{
		s_trimmed[i] = (char)s1[start];
		start++;
		i++;
	}
	s_trimmed[i] = 0;
	return (s_trimmed);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s", ft_strtrim(argv[1], argv[2]));
}
*/