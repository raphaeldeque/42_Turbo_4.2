#include <stdio.h>
int	ft_is_prime(int nb);

int	main(void)
{
	int i;

	i = -7;
	while (++i <= 150)
	{
		// ft_is_prime(i);
		// if (ft_is_prime(i) > 0)
			printf("%d: %d\n",i,ft_is_prime(i));
	}
	return (0);
}
