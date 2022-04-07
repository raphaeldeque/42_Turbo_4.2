#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str;
	int n;
	
	str = "One two three, 23 chars";

	n = ft_strlen(str);
	printf("str = %s\nlenght = %i\n", str, n);
	return(0);
}
