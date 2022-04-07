/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 05:40:48 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/05 05:41:27 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_size;
	unsigned int	s_size;

	i = 0;
	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	if (size <= d_size)
		return (size + s_size);
	while (src[i] != '\0' && size > d_size + 1)
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (d_size + ft_strlen(&src[i]));
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
