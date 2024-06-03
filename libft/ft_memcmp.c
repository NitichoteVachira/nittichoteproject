/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:14:20 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/23 14:26:32 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			count;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	count = 0;
	while (count < n)
	{
		if (str1[count] != str2[count])
			return (str1[count] - str2[count]);
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "this is a test";
	char 	*s2 = "thi";
	size_t	n = '\0';

	int	out1 = memcmp(s1, s2, n);
	int	out2 = ft_memcmp(s1, s2, n);
	printf("out1 = %d\n",out1);
	printf("out2 = %d\n",out2);
	return (0);
}*/
