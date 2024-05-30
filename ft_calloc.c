/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:01:56 by slipin            #+#    #+#             */
/*   Updated: 2024/05/20 18:07:30 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (nmemb > 0 && size > 0 && nmemb > (UINT_MAX / size))
		return (0);
	if (tab == NULL)
		return (0);
	ft_bzero(tab, nmemb * size);
	return (tab);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	void	*a;
	void	*b;

	if (argc == 3)
	{
		a = ft_calloc(atoi(argv[1]), atoi(argv[2]));
		b = calloc(atoi(argv[1]), atoi(argv[2]));
		if (a != NULL)
			printf("ft_calloc: allocated\n");
		if (b != NULL)
			printf("calloc: allocated\n");
	}
}
*/
