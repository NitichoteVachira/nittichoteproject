/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:47 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/04 16:52:21 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*need == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == need[j] && (i + j) < len)
		{
			if (need[j + 1] == '\0')
				return ((char *)(hay + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *hay = "blackkingbar";
	const char *need = "king";
	size_t len = 2;

	char *out1 = strnstr(hay, need, len);
	char *out2 = ft_strnstr(hay, need, len);
	printf("out1 = %s\n", out1);
	printf("out2 = %s\n", out2);
	return (0);
}*/
