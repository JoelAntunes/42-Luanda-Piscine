/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalafai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 08:23:55 by amalafai          #+#    #+#             */
/*   Updated: 2024/10/19 08:24:30 by amalafai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_rec(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_rec(nb / 10);
		ft_putnbr_rec(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_putnbr_rec(nb);
}
