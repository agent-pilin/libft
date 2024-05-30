/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:47:24 by slipin            #+#    #+#             */
/*   Updated: 2024/05/15 15:50:26 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("C function gives: %d\n", toupper(atoi(argv[1])));
		printf("My function gives: %d\n", ft_toupper(atoi(argv[1])));
	}
}
*/
