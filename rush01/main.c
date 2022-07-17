/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:57:33 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:47:30 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "arguments.h"

int	main(int argc, char **argv)
{
	int	**numbers;

	if (!all_errors(argc, argv))
		return (0);
	numbers = gen_tab();
	numbers = solve(numbers, argv[1], 0, 0);
	display_tab(numbers);
	free(numbers);
	return (0);
}
