/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:25:40 by joantune          #+#    #+#             */
/*   Updated: 2024/12/07 13:35:45 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_list_push_front(t_dict **liste, int n, int suf, char *lit)
{
	t_dict	*push;

	if (liste)
	{
		push = ft_create_elem(n, suf, lit);
		if (push == NULL)
			return (0);
		push->next = *liste;
		*liste = push;
	}
	else
	{
	t_dict *new_node = ft_create_elem(n, suf, lit);
		if (new_node == NULL)
		{
    			return -1;
		}
		*liste = new_node;
		return 1;
	}
	return (1);
}
