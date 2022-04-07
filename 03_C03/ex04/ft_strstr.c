/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 05:40:41 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/04/05 12:06:23 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		str_i = str;
		while (*str_i == *to_find && *to_find != '\0')
		{
			str_i++;
			to_find++;
		}
		if (*to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
