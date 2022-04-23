/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 04:56:04 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/21 19:59:17 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (count);
}

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i] != '\0')
		if (charset[i] == c)
			return (1);
	return (0);
}

int	ft_n_cell(char *str, char *charset)
{
	int	i;
	int	cell;

	cell = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (ft_is_sep(str[i + 1], charset) || str[i + 1] == '\0')
			if (!ft_is_sep(str[i], charset))
				cell++;
	}
	return (cell);
}

int	ft_cellcpy(char **res, char *str, char *charset)
{
	int	cell;
	int	len;
	int	i;

	cell = 0;
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_sep(str[i], charset))
		{
			len = 0;
			while (str[i + len] != '\0' && !ft_is_sep(str[i + len], charset))
				len++;
			res[cell] = malloc(sizeof(char) * (len + 1));
			if (!res[cell])
				return (0);
			ft_strlcpy(res[cell], &str[i], (len + 1));
			cell++;
			i = i + len;
		}
		else
			i++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;

	res = malloc(sizeof(char *) * (ft_n_cell(str, charset) + 1));
	if (!res)
		return (NULL);
	if (!ft_cellcpy(res, str, charset))
		return (NULL);
	return (res);
}
