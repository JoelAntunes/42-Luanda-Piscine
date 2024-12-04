/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:56:47 by joantune          #+#    #+#             */
/*   Updated: 2024/11/24 18:56:58 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	end;
	int	start;

	end = size - 1;
	start = 0;
	while (start < end)
	{
		tab[start] += tab[end];
		tab[end] = tab[start] - tab[end];
		tab[start] -= tab[end];
		end--;
		start++;
	}
}
