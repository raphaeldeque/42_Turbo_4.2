#include <stdio.h>
char **ft_split(char *str, char *charset);
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	*str = " gh ";
	char	*sep = "gh";
	char	**res;
	int		i;

	res = ft_split(str, sep);

	// i = 0;
	// while (res[i] != NULL)
	// {
	// 	ft_putstr(res[i]);
	// 	ft_putstr("\n");
	// 	i++;
	// }
	// ft_putstr("------");
	// ft_putstr("\n");

	i = 0;
	while (res[i] != NULL)
	{
		printf("tab[%i]:%s\n",i,res[i]);
		i++;
	}
	printf("tab[%i]:-----------%s\n",i,res[i]);
	// i++;
	// printf("tab[%i]:%s\n",i,res[i]);
	return (0);
}