
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	int res;

	res = ft_strcmp("ABCDkE", "ABCDEE");

	if (res == 0) {
		printf("<str1> and <str2> are equal");
		printf("\n");
	} else if (res < 0) {
		printf("<str1> is less than <str2> (%d)\n", res);
	} else {
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
}
