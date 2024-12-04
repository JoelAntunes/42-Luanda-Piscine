/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalafai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 08:15:05 by amalafai          #+#    #+#             */
/*   Updated: 2024/10/19 08:21:21 by amalafai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_num(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	print_comb(int i, int j)
{
	print_num(i);
	write(1, " ", 1);
	print_num(j);
	if (!(i == 98 && j == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_comb(i, j);
			j++;
		}
		i++;
	}
}
