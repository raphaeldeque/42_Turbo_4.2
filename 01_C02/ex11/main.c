#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{	
	char alpha[] = "abraca \n dabra \v";
	// char empty[] = "";
	char num[1] = {27};

	ft_putstr_non_printable(alpha);
	// printf("%s: \n", alpha);
	// ft_putstr_non_printable(empty);
	// printf("%s: \n", empty);
	ft_putstr_non_printable(num);
	// printf("%c: \n", *num);
}
