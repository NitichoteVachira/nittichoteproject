/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:49:23 by nivachir          #+#    #+#             */
/*   Updated: 2023/09/18 17:14:52 by nivachir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	else
		return (0);
}
/*
int	main(void)
{
	int input = 'C';
	int output = isalpha(input);
	int	output_ft	= ft_isalpha(input);

	printf("output resault: %d\n",output);
	printf("output_ft resault: %d\n",output_ft);

	return (0);
}*/
