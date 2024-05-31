/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:48:43 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 18:53:52 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	unsigned long	i;
	char			*copy_src;

	copy_src = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy_src == NULL)
		return (0);
	i = 0;
	while (i < ft_strlen(src))
	{
		copy_src[i] = src[i];
		i++;
	}
	copy_src[i] = '\0';
	return (copy_src);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("My function gives: %s\n", ft_strdup(argv[1]));
		printf("C function gives: %s\n", strdup(argv[1]));
	}
}
*/
