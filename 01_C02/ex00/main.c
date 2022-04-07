#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[] = "anything";
	char src[] = "banana55";

	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);

	ft_strcpy(dest, src);	

	printf("dest: %s\n", dest);
	return (0);
}
