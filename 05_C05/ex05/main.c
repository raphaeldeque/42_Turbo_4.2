#include <stdio.h>
int	ft_sqrt(int nb);

int	main(void)
{
	int i;

	i = -4;
	while (++i <= 10)
	{
		if (ft_sqrt(i) > 0)
			printf("%d: %d\n",i,ft_sqrt(i));
	}
	// printf("%d", ft_sqrt(2147483647));

	return (0);
}
