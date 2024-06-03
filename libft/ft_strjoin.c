/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:14:37 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/27 17:56:22 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	int		i;

	output = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (*s1)
		output[i++] = *s1++;
	while (*s2)
		output[i++] = *s2++;
	output[i] = '\0';
	return (output);
}
/*
int	main (void)
{
	char const	*s1 = "this";
	char const	*s2 = " love";
	char		*ft_output;

	ft_output = ft_strjoin(s1,s2);
	printf("s1: %s\ns2: %s\noutput: %s\n",s1,s2,ft_output);
	free(ft_output);
	return (0);
}*/
