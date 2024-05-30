/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:39:18 by slipin            #+#    #+#             */
/*   Updated: 2024/05/16 18:06:03 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if ((char *)dest <= (char *)src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		//char	*result = memmove(argv[1], argv[2], atoi(argv[3]));
		//printf("C function (dest): %s\n", argv[1]);
		//printf("C function (src): %s\n", argv[2]);
		//printf("C function (result): %s\n", result);
		char	*ft_result = ft_memmove(argv[1], argv[2], atoi(argv[3]));
		printf("My function (dest): %s\n", argv[1]);
		printf("My function (src): %s\n", argv[2]);
		printf("My function (result): %s\n", ft_result);
	}
}
*/
