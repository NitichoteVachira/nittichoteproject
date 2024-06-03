/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sidefunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:34:10 by nivachir          #+#    #+#             */
/*   Updated: 2023/11/10 12:36:36 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len(unsigned long long input, char *base_num)
{
	size_t				output;
	unsigned long long	base_len;

	output = 1;
	base_len = ft_strlen(base_num);
	while (input >= base_len)
	{
		input /= base_len;
		output++;
	}
	return (output);
}

char	*ft_sidefunc(unsigned long long input, char *base_num)
{
	char	*output;
	int		numlen;
	int		baselen;

	numlen = ft_len(input, base_num);
	baselen = ft_strlen(base_num);
	output = ft_calloc((numlen + 1), sizeof(char));
	if(!output)
		return (NULL);
	while (numlen)
	{
		numlen = numlen - 1;
		output[numlen] = base_num[input % baselen];
		input /= baselen;
	}
	return (output);
}
