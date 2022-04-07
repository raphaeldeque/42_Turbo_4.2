#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ft_atoi(char *str);

int	main(void)
{
	char *txt;
	// int i = 0;

	txt = "     42 teste";
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

	txt = "---+--+1234ab567";
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

	txt = "+77";
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

	// while (i++ < 250)
	// 	printf("%d: %d\n",i, isspace(i));
	// return (0);
}

