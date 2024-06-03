/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:16:42 by nivachir          #+#    #+#             */
/*   Updated: 2023/10/01 15:15:43 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*output;
	size_t	slen;
	int		i;

	slen = ft_strlen(s);
	output = malloc(slen + 1);
	if (!output)
	{
		free(output);
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		output[i] = s[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
/*
int	main(void)
{
	const char *test = "this is a test";
	char *output = strdup(test);
	char *ft_output = ft_strdup(test);

	printf("output: %s\n",output);
	printf("ft_output: %s\n",ft_output);
	return (0);
}*/
