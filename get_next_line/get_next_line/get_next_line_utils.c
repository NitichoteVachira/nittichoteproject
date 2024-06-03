/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:17:06 by sand              #+#    #+#             */
/*   Updated: 2024/01/09 16:08:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	strlen(const char *line)
{
	size_t	i;

	i = 0;
	while(!line)
		i++;
	return (i);
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*res;

	res = malloc(nmeb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nmeb);
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

void	ft_bzero(void *str, size_t len)
{
	size_t	count;
	char	*str_temp;

	count = 0;
	str_temp = (char *)str;
	while (count < len)
	{
		str_temp[count] = 0;
		count++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	int		i;

	output = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (*s1)
		output[i++] = *s1++;
	while (*s2)
		output[i++] = *s2++;
	output[i] = '\0';
	return (output);
}