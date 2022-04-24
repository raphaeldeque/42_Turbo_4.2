#include "bsq.h"
#include <stdio.h>

int	line_lenght(char *map);

void	bsq(char *map_file)
{
	t_map	map;
	t_draw	draw;

	map = build_map(map_file);
	printf("map:\n");
	printf("\tx =\t%d\n\ty =\t%d\n", map.x, map.y);
	int i = 0;
	while (map.map[i])
	{
		printf("\t%s\n", map.map[i]);
		i++;
	}
	draw = get_drawchars(map_file);
	printf("\n");
	printf("drawchars:\n");
	printf("\tempty:\t%c\n", draw.empty);
	printf("\tobst:\t%c\n", draw.obst);
	printf("\tfill:\t%c\n", draw.fill);
}

t_map	build_map(char *map_file)
{
	t_map	map;

	map.y = ft_atoi(map_file);
	while (*map_file != '\n')
		map_file++;
	map_file++;
	map.x = line_lenght(map_file);
	map.map = ft_split(map_file, "\n");
	return (map);
}

t_draw	get_drawchars(char *map_file)
{
	t_draw	draw;

	while (*map_file >= 48 && *map_file <= 57)
		map_file++;
	draw.empty = *map_file;
	draw.obst = *(map_file + 1);
	draw.fill = *(map_file + 2);
	return (draw);
}

int	line_lenght(char *map)
{
	int	lenght;

	lenght = 0;
	while (*map != '\n')
	{
		map++;
		lenght++;
	}
	return (lenght);
}
