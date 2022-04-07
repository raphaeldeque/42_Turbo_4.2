#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 950;
	b = 88;

	printf("Before:\na = %d\nb = %d\n\n", a, b);
	ft_swap(&a, &b);
	printf("After:\na = %d\nb = %d\n", a, b);

	return(0);
}
