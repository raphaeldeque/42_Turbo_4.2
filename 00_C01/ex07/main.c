#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int size;
	int tab[] = {0, 1, 20, 3, 4, -3};
	size = 6;

	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	printf("\nBefore\n\n");

	ft_rev_int_tab(tab, size);

	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	printf("\nAfter\n");

	return(0);
}
