/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:04:53 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:42:42 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "arguments.h"

void	display_error(void)
{
	write(1, "Error\n", 6);
}

int	check_input(char *str)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (str[i] != 32)
				return (0);
		}
		i++;
	}
	return (1);
}

int	all_errors(int argc, char **argv)
{
	if (argc != 2)
	{
		display_error();
		return (0);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		display_error();
		return (0);
	}
	if (!check_input(argv[1]))
	{
		display_error();
		return (0);
	}
	return (1);
}
