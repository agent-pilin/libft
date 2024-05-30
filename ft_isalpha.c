/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:27:48 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 14:30:39 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("C function gives: %d\n", isalpha(atoi(argv[1])));
		printf("My function gives: %d\n", ft_isalpha(atoi(argv[1])));
	}
}
*/
