#include <stdio.h>
int	ft_is_prime(int nb);

int	main(void)
{
	int i;

	i = -3;
	while (++i <= 16)
	{
		// ft_is_prime(i);
		if (ft_is_prime(i) > 0)
			printf("%d: %d\n",i,ft_is_prime(i));
	}
	return (0);
}
