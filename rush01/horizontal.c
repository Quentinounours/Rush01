/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horizontal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:32:24 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:57:48 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	verify_line_h(int *line, char left, char right)
{
	int	i;
	int	max;
	int	count_left;
	int	count_right;

	count_left = 1;
	count_right = 1;
	max = line[0];
	i = 0;
	while (i < 3)
	{
		if (line[i + 1] > max)
		{
			max = line[i + 1];
			count_left++;
		}
		i++;
	}
	i = 0;
	max = line[3];
	while (i < 3)
	{
		if (line[3 - (i + 1)] > max)
		{
			max = line[3 - (i + 1)];
			count_right++;
		}
		i++;
	}
	if (count_right == right - 48 && count_left == left - 48)
		return (1);
	return (-1);
}

int	check_h(int **tab, int line, char *str)
{
	int	i;
	int	left;
	int	right;

	left = (line * 2) + 16;
	right = (line * 2) + 24;
	i = 0;
	while (i <= 3)
	{
		if (tab[line][i] == 0)
			return (0);
		i++;
	}
	return (verify_line_h(tab[line], str[left], str[right]));
}
