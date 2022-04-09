#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int exp;
	int b;

	b = 5;
	while (b-- > -2)
	{
		exp = 4;
		while (exp-- > -2)
			printf("%d^%d=%d\t\t",b,exp,ft_iterative_power(b, exp));
		printf("\n");
	}
	return (0);
}
