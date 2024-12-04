/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:57:20 by joantune          #+#    #+#             */
/*   Updated: 2024/12/01 13:57:29 by joantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	lines_to_array(int checktab[4][4], int permut[24][4], int linesnum[4]);
void	print_solution(int tab[4][4]);
void	get_permut(int my_permut[24][4]);
int		verif(int tab[4][4], int *val);

void	loop(int lines[4], int checktab[4][4], int permut[24][4], int val[16])
{
	while (lines[0]++, lines[0] < 24)
	{
		lines[1] = 0;
		while (lines[1]++, lines[1] < 24)
		{
			lines[2] = 0;
			while (lines[2]++, lines[2] < 24)
			{
				lines[3] = 0;
				while (lines[3]++, lines[3] < 24)
				{
					lines_to_array(checktab, permut, lines);
					if (verif(checktab, val) == 1)
					{
						print_solution(checktab);
						return ;
					}
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

void	resolve(int val[16])
{
	int	permut[24][4];
	int	checktab[4][4];
	int	linesnum[4];
	int	i_cur;

	i_cur = -1;
	while (i_cur++, i_cur < 4)
		linesnum[i_cur] = -1;
	get_permut(permut);
	loop(linesnum, checktab, permut, val);
}

int	process_char(int cur, char **argv, int val[16])
{
	if (cur > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (cur % 2 == 0)
	{
		if (argv[1][cur] >= 48 && argv[1][cur] <= 57)
			val[cur / 2] = argv[1][cur] - 48;
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		if (argv[1][cur] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	val[16];
	int	cur;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	cur = -1;
	while (cur++, argv[1][cur] != 0)
	{
		if (process_char(cur, argv, val) == 1)
			return (1);
	}
	resolve(val);
}
