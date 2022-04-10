#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	int i;

	i = -4;
	while (++i <= 12)
	{
		// printf("%d: %d\n",i,ft_fibonacci(i));
		printf("%d: %d\n",i,ft_fibonacci(i));
	}
	return (0);
}
