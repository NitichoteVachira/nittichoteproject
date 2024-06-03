/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:14:53 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/22 13:22:20 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*back;
	char	*output;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	back = (char *)(s1 + ft_strlen(s1) - 1);
	while (back > s1 && ft_strchr(set,*back))
		back--;
	len = back - s1 + 1;
	output = (char *)malloc(len + 1);
	if (output == NULL)
		return (NULL);
	ft_strlcpy(output, s1, len +1);
	return (output);
}
/*
int 	main(void)
{
	char const	*s1 = "aaabccbbaaa";
	char const	*set = "ba";
	char		*output;

	output = ft_strtrim(s1,set);
	printf("s1: %s\nset: %s\noutput: %s",s1,set,output);
	free(output);
	return (0);
}*/
