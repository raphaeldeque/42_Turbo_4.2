#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i;

	i = 8;
	while (i-- > -4)
		printf("nb: %d  fact= %d\n",i,ft_recursive_factorial(i));
	return (0);
}
