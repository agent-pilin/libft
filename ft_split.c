/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:38:35 by slipin            #+#    #+#             */
/*   Updated: 2024/05/17 15:50:32 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strings(char const *str, char charset)
{
	int	i;
	int	count;
	int	substring;

	count = 0;
	i = 0;
	substring = 0;
	while (str[i] != '\0')
	{
		if (str[i] != charset)
		{
			if (substring == 0)
			{
				count++;
				substring = 1;
			}
		}
		else
			substring = 0;
		i++;
	}
	return (count);
}

char	*fill_substring(char const *str, char charset)
{
	char	*substring;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != charset)
		i++;
	substring = malloc(sizeof(char) * (i + 1));
	if (substring == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != charset)
	{
		substring[i] = str[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted_table;
	int		i;
	int		j;

	splitted_table = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (splitted_table == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			splitted_table[j] = fill_substring(s + i, c);
			i += ft_strlen(splitted_table[j]);
			j++;
		}
		else
			i++;
	}
	splitted_table[j] = 0;
	return (splitted_table);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
	printf("%d strings found.\n", count_strings(argv[1], argv[2][0]));	
	char **final_table = ft_split(argv[1], argv[2][0]);
		int	i = 0;
		while (final_table[i] != 0)
		{
			printf("str %d: %s\n", i, final_table[i]);
			i++;
		}
	}
				//return (cut_string(str, i));
}
*/