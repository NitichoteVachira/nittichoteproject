/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:12:47 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/27 18:27:25 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (i < len)
	{
		output[i] = s[start + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
/*
int	main(void)
{
	char const 	*s = "this is a test";
	unsigned int	start = 0;
	size_t		len = 4;

	char  *output = ft_substr(s,start,len);
	printf("output = %s",output);
	free(output);
	return (0);
}*/
