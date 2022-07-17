/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:22:47 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:43:56 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "arguments.h"
#include <stdlib.h>

int	is_possible(int **tab, int x, int y, int n)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (tab[y][i] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		if (tab[i][x] == n)
			return (0);
		i++;
	}
	return (1);
}

int	**gen_tab(void)
{
	int	i;
	int	j;
	int	**tab;

	tab = malloc(sizeof(int *) * 4);
	i = 0;
	while (tab[i])
		tab[i++] = malloc(sizeof(int) * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			tab[i][j++] = 0;
		i++;
	}
	return (tab);
}

int	count(int **tab, int n)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j++] == n)
				count++;
		}
		i++;
	}
	if (count < 4)
		return (1);
	return (0);
}

int	check_all(int **tab, char *str)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	x = 0;
	count = 0;
	while (y < 4)
		count += check_h(tab, y++, str);
	while (x < 4)
		count += check_v(tab, x++, str);
	if (count == 8)
		return (1);
	return (0);
}
