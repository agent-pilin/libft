/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:39:06 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 18:40:02 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char symbol)
{
	int		i;
	char	*alphabet;

	i = 0;
	alphabet = " \t\v\f\r\n";
	while (alphabet[i] != '\0')
	{
		if (symbol == alphabet[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = sign - 2 * (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("My function: %d\n", ft_atoi(argv[1]));
//		printf("My function: %d\n", ft_atoi(" \r\v\f  \n --+-589 aeraer"));
		printf("Atoi function: %d\n", atoi(argv[1]));
//		printf("%d\n", isspace(32));
	}
}
*/
