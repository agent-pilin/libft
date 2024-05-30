/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:51:28 by slipin            #+#    #+#             */
/*   Updated: 2024/05/17 18:41:30 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_signs(unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (n / 10 > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	count;
	unsigned int	n_copy;
	char			*s;

	count = 1 + (n < 0);
	n_copy = n * (1 - 2 * (n < 0));
	count += count_signs(n_copy);
	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
		return (0);
	s[count] = 0;
	if (n_copy == 0)
		return ("0\0");
	while (n_copy > 0)
	{
		s[count - 1] = (n_copy % 10) + '0';
		n_copy = n_copy / 10;
		count--;
	}
	if (count > 0)
		s[0] = '-';
	return (s);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		//printf("%s\n", ft_itoa(atoi(argv[1])));
		printf("%d\n", INT_MIN);
    printf("%d\n", INT_MAX);
}
*/
