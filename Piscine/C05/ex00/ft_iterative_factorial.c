/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:57:26 by joantune          #+#    #+#             */
/*   Updated: 2024/12/08 16:57:30 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	fatorial = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		fatorial++;
	}
	while (nb > 1)
	{
		fatorial *= --nb;
	}
	return (fatorial);
}
