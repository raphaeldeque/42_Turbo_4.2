#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[] = "semaforo vermelho";
	char src[] = "ABCDEFGH";
	unsigned int	res;

	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);

	res = ft_strlcpy(dest, src, 5);

	src[0] = 'z';
	printf("dest: %s\n", dest);
	printf("%i chars\n", res);

	return (0);
}
