/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:32:07 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:47:44 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "arguments.h"

int	**solve(int **tab, char *str, int x, int y)
{
	int	n;

	n = 1;
	while (y < 4)
	{
		while (x < 4)
		{
			if (tab[y][x] == 0)
			{
				while (n <= 4)
				{
					if (is_possible(tab, x, y, n) == 1)
					{
						tab[y][x] = n;
						solve(tab, str, x, y++);
						tab[y][x] = 0;
					}
				n++;
				}
			}
			x++;
		}
		y++;
	}
	return (tab);
}
