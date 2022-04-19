#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	struct s_stock_str *tabtest;
	int i;

	tabtest = ft_strs_to_tab(ac, av);
	i = -1;
	while (++i < ac+1)
		printf("%i\n%s\n%s\n", tabtest[i].size, tabtest[i].str, tabtest[i].copy);
	return (0);
}
