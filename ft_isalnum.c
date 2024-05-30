/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:40:07 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 14:43:40 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
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
		printf("C function gives: %d\n", isalnum(atoi(argv[1])));
		printf("My function gives: %d\n", ft_isalnum(atoi(argv[1])));
	}
}
*/
