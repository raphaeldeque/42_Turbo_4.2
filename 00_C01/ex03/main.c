#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 2;
	div = malloc(sizeof(a));
	mod = malloc(sizeof(a));

	ft_div_mod(a, b, div, mod);
	printf("Div of %d by %d: %d\n", a, b, *div);
	printf("Mod of %d by %d: %d\n", a, b, *mod);

	return(0);
}
