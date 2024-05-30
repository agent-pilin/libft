/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:59:53 by slipin            #+#    #+#             */
/*   Updated: 2024/05/20 15:00:53 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}
/*
void	function_example(unsigned int i, char *a)
{
	if (a[i] >= 65 && a[i] <= 90)
		a[i] = a[i] + 32;
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_striteri(argv[1], &function_example);
		printf("%s\n", argv[1]);
	}
}
*/
