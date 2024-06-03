/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:35:33 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/04 13:12:46 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "this is a test";
	int	c =  'i';
	size_t n = 4;
	
	char *output1 = memchr(s,c,n);
	char *output2 = ft_memchr(s,c,n);
	printf("output1 = %s\n",output1);
	printf("output2 = %s\n",output2);
	return (0);	
}*/
