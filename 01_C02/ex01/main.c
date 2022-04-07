#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[] = "semaforo vermelho";
	char src[] = "ABCD";

	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);

	ft_strncpy(dest, src, 5);

	src[0] = 'z';
	printf("dest: %s\n", dest);

	return (0);
}
