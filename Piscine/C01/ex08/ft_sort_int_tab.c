/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:57:27 by joantune          #+#    #+#             */
/*   Updated: 2024/11/24 18:57:40 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;
	int	swap_counter;

	swap_counter = -1;
	size -= 1;
	while (size)
	{
		counter = 0;
		while (counter < size)
		{
			if (tab[counter] > tab[counter + 1])
			{
				tmp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = tmp;
				swap_counter++;
			}
			counter++;
		}
		if (swap_counter == 0)
			return ;
		size--;
	}
}
