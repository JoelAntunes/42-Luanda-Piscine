/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:51:58 by joantune          #+#    #+#             */
/*   Updated: 2024/12/04 16:52:10 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_digito(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_espaco(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_sinal(int c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	x;
	int	sinal;

	x = 0;
	sinal = 1;
	while (ft_espaco(*str))
		str++;
	while (ft_sinal(*str))
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	while (ft_digito(*str))
	{
		x = x * 10 + (*str - '0');
		str++;
	}
	return (x * sinal);
}
