#include <stdio.h>
#include <string.h>
int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int *tab;

	min = -10;
	max = 10;
	tab = ft_range(min, max);
	i = 0;
	while (min < max)
	{
		printf("%i, ", tab[i++]);
		min++;
	}
	printf("\n");
	return (0);

}

