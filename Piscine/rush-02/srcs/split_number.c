/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:31:30 by joantune          #+#    #+#             */
/*   Updated: 2024/12/07 15:33:34 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_h.h"

int	first_check(char *nbr, int *i, int *j, t_dict *begin_list)
{
	int	k;
	int	nb;

	k = 0;
	while (nbr[*i] == '0')
		(*i)++;
	if (*j % 3 != 0)
	{
		while (*j % 3 != 0 || *j == 0)
		{
			nbr2[k++] = nbr[(*i)++];
			(*j)--;
		}
		nbr2[k] = '\0';
		send_to_print((nb = ft_atoi(nbr2)), begin_list, *i, nbr);
		if (*j == 0)
		{
			ft_putchar('\n');
			return (0);
		}
		if (*j >= 3)
			print_suff(*i, nbr, *j / 3, begin_list);
	}
	return (1);
}

void	make_three(char nbr2[4], int j, char *nbr, t_dict *begin_list)
{
	int	nb;
	int	i;
	int	k;

	while (j > 0)
	{
		k = 0;
		while (k != 3)
		{
			nbr2[k] = nbr[i];
			i++;
			j--;
			k++;
		}
		nbr2[k] = '\0';
		nb = ft_atoi(nbr2);
		if (nb != 0)
		{
			send_to_print(nb, begin_list, i, nbr);
			if (j >= 3)
				print_suff(i, nbr, j / 3, begin_list);
		}
	}
}

int	check_number(char *nbr, t_dict *begin_list)
{
	int	i;
	int	j;
	int	k;
	int	nb;

	i = 0;
	nb = 0;
	k = 0;
	j = check_length(nbr);
	if (j > 3 && check_suff((j - 1) / 3, begin_list) == 0)
		return (0);
	if (ft_atoi(nbr) == 0)
	{
		ft_putstr("zero");
		ft_putchar('\n');
		return (0);
	}
	if (first_check(nbr, &i, &j, begin_list) == 0)
		return (0);
	make_three(i, j, nbr, begin_list);
	ft_putchar('\n');
	return (0);
}
