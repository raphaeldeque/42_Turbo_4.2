#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{	
	char alpha[] = "ALOHA";
	char empty[] = "8 * 0)(";
	char text[] = "42 bOrn to BE rooT 12345";

	char *res;
	res = ft_strlowcase(alpha);
	printf("%s\n", res);
	res = ft_strlowcase(empty);
	printf("%s\n", res);
	res = ft_strlowcase(text);
	printf("%s\n", res);

}
