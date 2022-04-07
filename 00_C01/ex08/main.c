#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int size;
	int tab[] = {0, 111, -2, 3, 40};
	size = 5;

	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	printf("\nBefore\n\n");

	ft_sort_int_tab(tab, size);

	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	printf("\nAfter\n");

	return(0);
}
