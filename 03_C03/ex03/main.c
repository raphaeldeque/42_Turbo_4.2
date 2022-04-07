
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char s1[] = "ABCDEE";
	char s2[] = "+++ABCDpl";

	// res = ft_strncmp("ABCDE", "ABCDEE", 3);

	ft_strncat(s1, s2, 1);

	printf("dest: %s\n", s1);
}
