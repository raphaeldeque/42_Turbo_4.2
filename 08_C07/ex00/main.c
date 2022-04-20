#include <stdio.h>
#include <string.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char text[] = "qwertyuioppoiuytrewq7897454651321";
	char *res;

	// char *dup;
	// *text = ;
	printf("   String: %s\n", text);
	printf("   String: %p\n\n", text);
	res = ft_strdup(text);

	printf("ft_strdup:  %s\n", res);
	printf("resp: %p\n", res);

	// printf("   strdup: %s\n", strdup(text));
	// printf("ft_strdup: %s\n\n", ft_strdup(text));

	return (0);
}
