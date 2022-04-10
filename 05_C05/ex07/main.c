#include <stdio.h>
int	ft_find_next_prime(int nb);

int	main(void)
{
	int i;

	i = 2147480645;
	while (++i < 2147483647)
	{
		// ft_find_next_prime(i);
		// if (ft_find_next_prime(i) > 0)
			printf("%d: %d\n",i,ft_find_next_prime(i));
	}
	return (0);
}
