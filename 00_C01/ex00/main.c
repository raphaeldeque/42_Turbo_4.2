#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int *nbr;
	int number;

	nbr = &number;
	ft_ft(nbr);
	printf("var number: %d\n*nbr pointer: %d\nnbraddress:%p\n", number, *nbr, nbr);
	return(0);
}
