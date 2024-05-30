/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:43:53 by slipin            #+#    #+#             */
/*   Updated: 2024/05/17 18:58:43 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_new;

	i = 0;
	s_new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s_new == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = 0;
	return (s_new);
}
/*
char	function_example(unsigned int i, char a)
{
	char	a_new;

	if (a >= 65 && a <= 90)
		a_new = a + 32;
	else
		a_new = a;
	return (a_new);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strmapi(argv[1], &function_example));
}
*/
