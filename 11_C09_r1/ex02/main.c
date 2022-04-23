#include <stdio.h>
char **ft_split(char *str, char *charset);
#include <unistd.h>

int	main(void)
{
	char	*str = "abacaxi na promocao!";
	char	*sep = "am";
	char	**res = ft_split(str, sep);
	int		i;

	i = 0;
	while (res[i] != NULL)
	{
		printf("tab[%i]:%s\n",i,res[i]);
		i++;
	}
	printf("tab[%i]:%s\n",i,res[i]);
	// i++;
	// printf("tab[%i]:%s\n",i,res[i]);
	return (0);
}