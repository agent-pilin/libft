/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slipin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:57:20 by slipin            #+#    #+#             */
/*   Updated: 2024/05/29 18:57:26 by slipin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list 		new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element  == NULL)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
