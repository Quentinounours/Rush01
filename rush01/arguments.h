/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:03:55 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/17 20:56:44 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENTS_H

# define ARGUMENTS_H

int		all_errors(int argc, char **argv);
void	display_error(void);
int		ft_strlen(char *str);
int		check_input(char *str);
void	ft_putchar(char c);
int		is_possible(int **tab, int x, int y, int n);
int		verify_line_v(int **tab, int line, char top, char bottom);
int		check_v(int **tab, int line, char *str);
int		verify_line_h(int **tab, int *line, char left, char right);
int		check_h(int **tab, int line, char *str);
int		**gen_tab(void);
void	display_tab(int **tab);
int		count(int **tab, int n);
int		**solve(int **tab, char *str, int x, int y);
int		check_all(int **tab, char *str);

#endif
