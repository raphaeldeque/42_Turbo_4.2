#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{	
	char alpha[] = "ALOHA maria";
	char empty[] = "8 * 0)( 42palavras";
	char text[] = " A_42 bOrn-to-BE rooT 12345arroz";

	char *res;
	res = ft_strcapitalize(alpha);
	printf("%s\n", res);
	res = ft_strcapitalize(empty);
	printf("%s\njijiji", res);
	res = ft_strcapitalize(text);
	printf("%s\n", res);

}
