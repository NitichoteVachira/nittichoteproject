/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:38:50 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/22 13:18:38 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstchar;
	char	*srcchar;

	dstchar = (char *) dst;
	srcchar = (char *) src;
	if (dstchar < srcchar)
	{
		i = 0;
		while (i < len)
		{
			dstchar[i] = srcchar[i];
			i++;
		}
	}
	else if (dstchar > srcchar)
	{
		i = len;
		while (i > 0)
		{
			dstchar[i - 1] = srcchar[i - 1];
			i--;
		}
	}
	return (dst);
}
/*
int	main (void)
{
	char		dst[] = "this is ";
	const char	src[] = "lsmcm";

	printf("before change dst , src: %s, %s\n",dst, src);
	ft_memmove(dst, src, 14);
	//memmove(dst,src, 14);
	printf("after change dst, src: %s, %s",dst ,src);
	return (0);
}*/
