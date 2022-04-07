
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char s1[] = "ABCDEE";
	char s2[] = "+++ABCDpl";

	// res = ft_strncmp("ABCDE", "ABCDEE", 3);

	strcat(s1, s2);

	printf("dest: %s\n", s1);
}
