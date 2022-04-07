
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char s1[] = "ABCDEEyDXy00";
	char s2[] = "DX";
	char *res;

	// res = ft_strncmp("ABCDE", "ABCDEE", 3);

	res = ft_strstr(s1, s2);

	printf("dest: %s\n", res);
}
