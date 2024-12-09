/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:25:10 by joantune          #+#    #+#             */
/*   Updated: 2024/12/07 15:56:39 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_clear(t_dict **begin_with, t_dict *ptr, t_dict	*liste)
{
	liste = *begin_with;
	if (liste)
		while (liste)
			ptr = liste->next;
	free(liste->literal);
	free(liste);
	liste = ptr;
}
