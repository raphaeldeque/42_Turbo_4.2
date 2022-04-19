#include "ft_abs.h"
#include <stdio.h>


int	main(int argc, char **argv)
{
	(void)argv;
	argc *= -1;
	printf("    argc value: %i\n", argc);
	printf("argc abs value: %i\n", ABS(argc));
	return (0);
}
