/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:46:59 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/22 13:24:38 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*
int	main(void)
{
	char		dst[10];
	const char	*src = "";
	size_t		len = sizeof(dst); 

	printf("before dst: %s || src: %s\n",dst ,src);
	size_t result = strlcpy(dst, src , len);
	printf("after dst: %s || src: %s\n",dst ,src);
	printf("size of dst length: %zu",result); 
	return (0);
}*/
