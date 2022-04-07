
#include <stdio.h>
#include <stdlib.h>
// #include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char s1[] = "ABCD--";
	char s2[] = "+++ABC";
	unsigned int res;

	// res = ft_strncmp("ABCDE", "ABCDEE", 3);

	res = ft_strlcat(s1, s2, 4);

	printf("dest: %s\n", s1);
	printf("chars src: %d\n", res);
}
