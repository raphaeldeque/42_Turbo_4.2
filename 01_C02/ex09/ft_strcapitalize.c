/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:06:04 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/01 00:56:24 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		first;
	char	c;

	i = 0;
	first = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		c = str[i];
		if (first == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
			first = 0;
		else
			first = 1;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
