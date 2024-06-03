/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:09:05 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/27 18:07:40 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;
	void		*output;

	i = 0;
	destination = (char *)dst;
	source = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	output = (void *)destination;
	return (output);
}
/*
int	main(void)
{
	char	*src = "this is a test";
	char	dst[20];

	ft_memcpy(dst, src, sizeof(src));
	printf("src = %s\n",src);
	printf("dst = %s\n",dst);
	return (0);
}*/
