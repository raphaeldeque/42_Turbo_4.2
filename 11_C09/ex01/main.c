#include "includes/ft.h"
#include <stdio.h>

int	main(void)
{
	char str1[] = "Teste com 18 chars";
	char str2[] = "Teste com 19 -chars";
	int l1 = ft_strlen(str1);
	int l2 = ft_strlen(str2);
	int *len1 = &l1;
	int *len2 = &l2;

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	printf("len1: %i\nlen2: %i\n---swap---\n", *len1, *len2);

	ft_swap(len1, len2);
	printf("len1: %i\nlen2: %i\n", *len1, *len2);
	printf("strcmp: %i\n", ft_strcmp(str1, str2));
	printf("testando\n");
	return (0);
}

// gcc -Wall -Wextra -Werror main.c -L. -lft
