#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 11;
	b = 2;

	printf("Before: div %d by %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After: div is %d, mod is %d\n", a, b);

	return(0);
}
