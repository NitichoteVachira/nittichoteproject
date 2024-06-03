/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:34:52 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/20 22:38:11 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char *s = "abcde";
	int	c = 'e';

	char *output = ft_strrchr(s,c + 255);
	char *output2 = strrchr(s,c + 255);
	printf("output = %p\n",output);
	printf("output2 = %c\n",*output2);
}*/
