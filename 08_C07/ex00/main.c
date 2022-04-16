#include <stdio.h>
#include <string.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char text[] = "txt";
	char *res;

	// char *dup;
	// *text = ;
	// printf("   String: %s\n", text);
	// printf("   strdup: %s\n", strdup(text));
	// printf("ft_strdup: %s\n", ft_strdup(text));
	res = ft_strdup(text);
	printf("res:  %s\n", res);
	printf("resp: %p\n", &res);
	return (0);
}
