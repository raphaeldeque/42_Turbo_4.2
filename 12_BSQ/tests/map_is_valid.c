/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:20:44 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/24 02:20:44 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	equal_row_len(char *map_file);
int	min_of_one_empty(char *map_file, char empty);
int	line_break_check(char *map_file, int input_rows);
int	valid_chars_check(char *map_file, char obst, char empty);

int	map_is_valid(char *map_file, t_draw *map)
{
	int	i;

	if (equal_row_len(char *map_file) == 0)
		return (0);
	if (min_of_one_empty(char *map_file, char map.empty) == 0)
		return (0);
	if (line_break_check(char *map_file, int input_rows) == 0)
		return (0);
	if (valid_chars_check(char *map_file, char map.obst, char map.empty) == 0)
		return (0);

	map.

	return (1);
}

int	equal_row_len(char *map_file)
{
	int	i;
	int	len;
	int	next;

	i = 0;
	while (map_file[i] != '\n')
			i++;
	len = i + 1;
	while (map_file[len] != '\n')
			len++;
	next = len + 1;
	while (map_file[next] != '\0')
	{
		while (map_file[next] != '\n')
			next++;
		if (next != len)
			return (0);
		next++;
	}
	return (len);
}

int	min_of_one_empty(char *map_file, char empty)
{
	int	i;

	i = 0;
	while (map_file[i] != '\n')
		i++;
	i++;
	while (map_file[i] != '\0')
	{
		if (map_file[i] == empty)
			return (1);
	}
	return (0);
}

int	line_break_check(char *map_file, int input_rows)
{
	int	i;
	int	rows;

	i = 0;
	rows = -1;
	while (map_file[i] != '\0')
	{
		if (map_file[i] == '\n')
			rows++;
		i++;
	}
	if (rows != input_rows)
		return (0);
	return (1);
}

int	valid_chars_check(char *map_file, char obst, char empty)
{
	int		i;
	char	c;

	i = 0;
	c = 0;
	while (map_file[i] != '\n')
		i++;
	i++;
	while (map_file[i] != '\0')
	{
		c = map_file[i];
		if (!(c == obst || c == empty || c == '\n'))
			return (0);
		i++;
	}
	return (1);
}
