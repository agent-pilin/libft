/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:04:35 by slipin            #+#    #+#             */
/*   Updated: 2024/05/17 15:32:56 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	i;
	char			*s_join;

	s_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s_join == NULL)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s_join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		s_join[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	return (s_join);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strjoin(argv[1], argv[2]));
}
*/
