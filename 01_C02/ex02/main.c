#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{	
	char alpha[] = "Abracadabra";
	char empty[] = "";
	char num[] = "Cal0r";

	int res;
	res = ft_str_is_alpha(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_alpha(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_alpha(num);
	printf("%s: %d\n", num, res);

}
