/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertical.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:31:47 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:48:00 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	verify_line_v(int **tab, int line, char top, char bottom)
{
	int	i;
	int	max;
	int	count_top;
	int	count_bottom;

	count_top = 1;
	count_bottom = 1;
	max = tab[0][line];
	i = 0;
	while (i <= 3)
	{
		if (tab[i][line] > max)
		{
			count_top++;
			max = tab[i][line];
		}
		i++;
	}
	i = 0;
	max = tab[3][line];
	while (i <= 3)
	{
		if (tab[3 - i][line] > max)
		{
			count_bottom++;
			max = tab[3 - i][line];
		}
		i++;
	}
	if (count_top == (top - '0') && count_bottom == (bottom - '0'))
		return (1);
	return (-1);
}

int	check_v(int **tab, int line, char *str)
{
	int	i;
	int	top;
	int	bottom;

	top = line * 2;
	bottom = line * 2 + 8;
	i = 0;
	while (i <= 3)
	{
		if (tab[i][line] == 0)
			return (0);
		i++;
	}
	return (verify_line_v(tab, line, str[top], str[bottom]));
}
