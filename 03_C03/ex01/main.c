
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	int res;

	// res = ft_strncmp("ABCDE", "ABCDEE", 3);

	res = strncmp("ABCDEE", "ABCDpl", 5);

	if (res == 0) {
		printf("<str1> and <str2> are equal");
		printf("\n");
	} else if (res < 0) {
		printf("<str1> is less than <str2> (%d)\n", res);
	} else {
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
}
