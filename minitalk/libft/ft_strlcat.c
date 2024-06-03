/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:29:43 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/22 13:44:09 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t datasize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (datasize == 0)
		return (src_len);
	if (dst_len > datasize)
		return (src_len + datasize);
	while (src[i] != '\0' && dst_len + i + 1 < datasize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	result = dst_len + src_len;
	return (result);
}
/*
int	main (void)
{
	char		dst[] = "marks";
	const char	src[] = "peterisgay";
	size_t		datasize = 5;

	printf("before dst: %s || src: %s\n", dst ,src);
	size_t result = strlcat(dst, src, datasize);
	printf("after dst: %s || src: %s\n", dst, src);
	printf("after size of data: %zu", result);
	return (0);
}*/
