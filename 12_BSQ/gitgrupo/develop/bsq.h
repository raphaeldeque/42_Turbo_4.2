#ifndef BSQ_H
# define BSQ_H

typedef struct s_map
{
	int		x;
	int		y;
	char	**map;
}			t_map;

typedef struct s_draw
{
	char	empty;
	char	obst;
	char	fill;
}			t_draw;

typedef struct s_coord
{
	int	x;
	int	y;
}		t_coord;

typedef struct s_solution
{
	struct s_coord	coord;
	int				size;
}					t_solution;

int		ft_atoi(char *str);
char	**ft_split(char *str, char *charset);
void	bsq(char *map_file);
t_map	build_map(char *map_file);
t_draw	get_drawchars(char *map_file);

#endif
