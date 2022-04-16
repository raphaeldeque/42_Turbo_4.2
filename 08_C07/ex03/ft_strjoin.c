/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:45:28 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/15 02:45:31 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(*src));
	if (!dup)
		return (NULL);
	dup = src;
	return (dup);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joint;

	if (size == 0)
		return (malloc(1));
	i = -1;
	while (++i < size - 1)
	{
		ft_strcpy(joint, strs[i]);
		joint = joint + ft_strlen(strs[i]) + 1;
		ft_strcpy(joint, sep);
		joint = joint + ft_strlen(sep) + 1;
	}
	ft_strcpy(joint, strs[size - 1]);
	joint = joint + ft_strlen(strs[size -1]) + 1;
	*joint = '\0';
	return (ft_strdup(joint));
}
