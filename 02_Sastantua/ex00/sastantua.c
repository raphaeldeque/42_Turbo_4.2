/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 00:15:41 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/03 00:15:41 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	do_i_jump(int size, int block, int line)
{
	// int	n;
	
	// n = 0; //saltos que já deu
	// while (n++ < size - 1)
	// {
		
	// }
	return (1);
	// return (0);
}

// build_door

int	jumps(int size, int block)
{
	int	j;
	int jumps;

	j = 0; //contador pra repetir a cada 2
	jumps = 0; // quantas linhas pra pular

	// while (j++ < )
	// {
	// 	while (j++ < 2)
	// 	{
	// 		jumps++;
	// 		j = 0;
	// 	}
	// }

	// jumps++; 2, 2, depois 3, 3 ...

	// return (quantos pulos)
	return (jumps);

	// if (n == 2)
	// {
	// 	jumps++;
	// 	n = 0;
	// }
	
}

void	sastantua(int size)
{
	int	row;
	int	space;
	int	star;
	int	block;
	int	line;

	row = 0;
	line = 1;
	block = 1;
	while (size > 0 && ++row <= size)
	{
		space = 1;
		while (space++ <= size - row)
			ft_putchar(' ');
		ft_putchar('/');
		star = 1;
		while (star++ <= 2 * row - 1)
			ft_putchar('*');
		ft_putchar('\\');
		ft_putchar('\n');
		line++;
		if (do_i_jump != 0)
		{
			block++;
			row = row + jumps(size, block);
		}
	}
}

// int	main(void)
// {
// 	sastantua(5);
// }
