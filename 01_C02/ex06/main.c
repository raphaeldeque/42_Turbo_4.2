#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{	
	char alpha[] = "abracadabra";
	char empty[] = "";
	char num[1] = {9};

	int res;
	res = ft_str_is_printable(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_printable(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_printable(num);
	printf("%c: %d\n", *num, res);

}
