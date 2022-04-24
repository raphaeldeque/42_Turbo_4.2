/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daolivei <daolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:22:35 by daolivei          #+#    #+#             */
/*   Updated: 2022/04/19 23:22:36 by daolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsq.h"

unsigned int	count_words(char *str, char *charset);
int				is_sep(char c, char *charset);
int				make_strs(char **strs, char *src, char *charset);
char			*ft_strncpy(char *dest, char *src, unsigned int n);

char	**ft_split(char *str, char *charset)
{
	char			**tab;
	unsigned int	words;

	words = (count_words(str, charset));
	tab = (char **)malloc((words + 1) * sizeof(*tab));
	if (!tab)
		return (NULL);
	tab[words] = 0;
	if (make_strs(tab, str, charset))
		return (NULL);
	return (tab);
}

unsigned int	count_words(char *str, char *charset)
{
	unsigned int	words;

	words = 0;
	while (*str)
	{
		if (((*(str + 1) == '\0') || (is_sep(*(str + 1), charset)))
			&& !(is_sep(*str, charset)))
			words++;
		str++;
	}
	return (words);
}

int	make_strs(char **strs, char *src, char *charset)
{
	unsigned int	buffer;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		if (!is_sep(src[j], charset))
		{
			buffer = 0;
			while (src[j + buffer] && !is_sep(src[j + buffer], charset))
				buffer++;
			strs[i] = (char *)malloc((buffer + 1) * sizeof(**strs));
			if (!strs[i])
				return (1);
			strs[i] = ft_strncpy(strs[i], &src[j], (buffer));
			i++;
			j += buffer;
		}
		else
			j++;
	}
	return (0);
}

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
