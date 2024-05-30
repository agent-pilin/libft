/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:16:38 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 15:21:07 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("My function gives: %lu\n", ft_strlen(argv[1]));
		printf("C function gives: %lu\n", strlen(argv[1]));
	}
}
*/
